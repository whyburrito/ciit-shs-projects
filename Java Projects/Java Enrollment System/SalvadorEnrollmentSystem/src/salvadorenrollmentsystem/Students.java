/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package salvadorenrollmentsystem;

import java.util.Date;
import java.util.LinkedList;

/**
 *
 * @author seans
 */
public class Students extends Users{
    private Section section;
    private YearLevel yearLevel;
    public static LinkedList<Students> students = new LinkedList<>();

    public Students(String firstName, String lastName, Gender gender, Date birthDate, YearLevel yearLevel, Section section) {
        super(firstName, lastName, gender, birthDate);
        this.yearLevel = yearLevel;
        this.section = section;
    }

    public YearLevel getYearLevel() {
        return yearLevel;
    }

    public void setYearLevel(YearLevel yearLevel) {
        this.yearLevel = yearLevel;
    }

    public Section getSection() {
        return section;
    }

    public void setSection(Section section) {
        this.section = section;
    }
}
