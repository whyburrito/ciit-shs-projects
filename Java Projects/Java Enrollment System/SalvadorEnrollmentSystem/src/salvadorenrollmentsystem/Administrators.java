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
public class Administrators extends Users{
    private JobTitle jobTitle;
    
    public static LinkedList<Administrators> administrators = new LinkedList<>();

    public Administrators(String firstName, String lastName, Gender gender, Date birthDate, JobTitle jobTitle) {
        super(firstName, lastName, gender, birthDate);
        this.jobTitle = jobTitle;
    }

    public JobTitle getJobTitle() {
        return jobTitle;
    }

    public void setJobTitle(JobTitle jobTitle) {
        this.jobTitle = jobTitle;
    }
    
    
}
