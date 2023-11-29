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
public class Teacher extends Users{
    private JobTitle jobTitle;
    private Subjects subject;
    
    public static LinkedList<Teacher> teachers = new LinkedList<>();

    public Teacher(String firstName, String lastName, Gender gender, Date birthDate, JobTitle jobTitle, Subjects subject) {
        super(firstName, lastName, gender, birthDate);
        this.jobTitle = jobTitle;
        this.subject = subject;
    }

    public JobTitle getJobTitle() {
        return jobTitle;
    }

    public void setJobTitle(JobTitle jobTitle) {
        this.jobTitle = jobTitle;
    }

    public Subjects getSubject() {
        return subject;
    }

    public void setSubject(Subjects subject) {
        this.subject = subject;
    }
    
    
}
