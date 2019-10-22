import org.apache.poi.xwpf.usermodel.*;
import org.openxmlformats.schemas.wordprocessingml.x2006.main.CTBookmark;

import java.io.*;
import java.math.BigInteger;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class AutoComplite {
    /*

     */
    public static void addBookmark(String document, String currentText, String replaceText, String description) throws IOException {
        FileInputStream in = new FileInputStream("/home/dell/IdeaProjects/SoPM/documents/" + document + ".docx");
        XWPFDocument doc = new XWPFDocument(in);
        for (XWPFParagraph paragraph : doc.getParagraphs()) {
            List<XWPFRun> runs = paragraph.getRuns();
            if (runs != null) {
                for (XWPFRun r : runs) {
                    String text = r.getText(0);
                    if (text != null && text.contains(currentText)) {
                        text = text.replace(currentText, replaceText);
                        r.setText(text, 0);
                        CTBookmark bookmark = paragraph.getCTP().addNewBookmarkStart();
                        bookmark.setName(replaceText);
                        bookmark.setId(BigInteger.valueOf(0));
                        paragraph.getCTP().addNewBookmarkEnd().setId(BigInteger.valueOf(0));

                    }
                }
            }
        }
        doc.write(new FileOutputStream("/home/dell/IdeaProjects/SoPM/documents/" + document + ".docx"));
        doc.close();
        writeBookmark(document, description, replaceText);
    }

    /*

     */
    public static void writeBookmark(String document, String description, String bookmark) {
        try (FileWriter fwriter = new FileWriter("/home/dell/IdeaProjects/SoPM/documents/b" + document + ".txt")) {
            fwriter.write(description + "#" + bookmark + "#" + bookmark + "\n");
            fwriter.close();
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
    }

    /*

     */
    public static void changeBookmark(String document, String previousBookmark, String changedBookmark) throws IOException {
        ArrayList<String[]> bookmarks = new ArrayList<String[]>();
        bookmarks = AutoComplite.getBookmarks(document);
        for (int i = 0; i < bookmarks.size(); i++) {
            if (bookmarks.get(i)[2] == previousBookmark) {
                bookmarks.get(i)[1] = previousBookmark;
                bookmarks.get(i)[2] = changedBookmark;
            }
        }
        FileWriter fwriter = new FileWriter("/home/dell/IdeaProjects/SoPM/documents/b" + document + ".txt", false);
        for (int i = 0; i < bookmarks.size(); i++) {
            fwriter.write(bookmarks.get(i)[0] + "#" + bookmarks.get(i)[1] + "#" + bookmarks.get(i)[2] + "\n");
        }
        fwriter.close();
    }

    /*
    readBookmarks() - read all of bookmarks for certain document.
    It accepts 
    */
    public static ArrayList<String[]> getBookmarks(String document) throws IOException {
        ArrayList<String[]> bookmarks = new ArrayList<String[]>();
        try (FileReader freader = new FileReader("/home/dell/IdeaProjects/SoPM/documents/b" + document + ".txt")) {
            Scanner fin = new Scanner(freader);
            while (fin.hasNextLine()) {
                String str = fin.nextLine();
                String delimeter = "#";
                String[] subStr;
                subStr = str.split(delimeter);
                bookmarks.add(subStr);
            }
            fin.close();
        } catch (Exception e) {
            System.out.println(e.getMessage());
        }
        return bookmarks;
    }
}