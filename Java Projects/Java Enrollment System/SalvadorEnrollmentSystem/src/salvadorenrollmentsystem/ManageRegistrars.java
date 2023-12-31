/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/GUIForms/JFrame.java to edit this template
 */
package salvadorenrollmentsystem;

/**
 *
 * @author seans
 */
public class ManageRegistrars extends javax.swing.JFrame {

    /**
     * Creates new form ManageRegistrars
     */
    public ManageRegistrars() {
        initComponents();
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jLabel1 = new javax.swing.JLabel();
        addRegistrar = new javax.swing.JButton();
        editRegistrar = new javax.swing.JButton();
        deleteRegistrar = new javax.swing.JButton();
        exitButton = new javax.swing.JButton();
        viewRegistrar = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setMaximumSize(new java.awt.Dimension(640, 467));
        setMinimumSize(new java.awt.Dimension(640, 467));
        setResizable(false);

        jLabel1.setFont(new java.awt.Font("Arial", 1, 24)); // NOI18N
        jLabel1.setText("Manage Registrars");

        addRegistrar.setFont(new java.awt.Font("Segoe UI", 0, 18)); // NOI18N
        addRegistrar.setText("Sign Up a New Registrar");
        addRegistrar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                addRegistrarActionPerformed(evt);
            }
        });

        editRegistrar.setFont(new java.awt.Font("Segoe UI", 0, 18)); // NOI18N
        editRegistrar.setText("Edit Registrar Details");
        editRegistrar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                editRegistrarActionPerformed(evt);
            }
        });

        deleteRegistrar.setFont(new java.awt.Font("Segoe UI", 0, 18)); // NOI18N
        deleteRegistrar.setText("Remove a Registrar");
        deleteRegistrar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                deleteRegistrarActionPerformed(evt);
            }
        });

        exitButton.setText("Back to main menu");
        exitButton.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                exitButtonActionPerformed(evt);
            }
        });

        viewRegistrar.setFont(new java.awt.Font("Segoe UI", 0, 18)); // NOI18N
        viewRegistrar.setText("View All Registrars");
        viewRegistrar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                viewRegistrarActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap(194, Short.MAX_VALUE)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                            .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                .addGroup(layout.createSequentialGroup()
                                    .addGap(24, 24, 24)
                                    .addComponent(jLabel1))
                                .addComponent(addRegistrar, javax.swing.GroupLayout.DEFAULT_SIZE, 268, Short.MAX_VALUE)
                                .addComponent(editRegistrar, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                                .addComponent(deleteRegistrar, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                            .addGroup(layout.createSequentialGroup()
                                .addComponent(viewRegistrar, javax.swing.GroupLayout.PREFERRED_SIZE, 268, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addGap(1, 1, 1)))
                        .addGap(177, 177, 177))
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                        .addComponent(exitButton, javax.swing.GroupLayout.PREFERRED_SIZE, 144, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(240, 240, 240))))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(66, 66, 66)
                .addComponent(jLabel1)
                .addGap(29, 29, 29)
                .addComponent(viewRegistrar)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 31, Short.MAX_VALUE)
                .addComponent(addRegistrar)
                .addGap(28, 28, 28)
                .addComponent(editRegistrar)
                .addGap(29, 29, 29)
                .addComponent(deleteRegistrar)
                .addGap(35, 35, 35)
                .addComponent(exitButton)
                .addGap(70, 70, 70))
        );

        pack();
        setLocationRelativeTo(null);
    }// </editor-fold>//GEN-END:initComponents

    private void addRegistrarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_addRegistrarActionPerformed
        // TODO add your handling code here:
        this.show(false);
        AddRegistrars ar = new AddRegistrars();
        ar.setVisible(true);
    }//GEN-LAST:event_addRegistrarActionPerformed

    private void editRegistrarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_editRegistrarActionPerformed
        // TODO add your handling code here:
        this.show(false);
        EditRegistrars er = new EditRegistrars();
        er.setVisible(true);
    }//GEN-LAST:event_editRegistrarActionPerformed

    private void deleteRegistrarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_deleteRegistrarActionPerformed
        // TODO add your handling code here:
        this.show(false);
        RemoveRegistrar rr = new RemoveRegistrar();
        rr.setVisible(true);
    }//GEN-LAST:event_deleteRegistrarActionPerformed

    private void exitButtonActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_exitButtonActionPerformed
        // TODO add your handling code here:
        this.show(false);
        StartMenu sm = new StartMenu();
        sm.setVisible(true);
    }//GEN-LAST:event_exitButtonActionPerformed

    private void viewRegistrarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_viewRegistrarActionPerformed
        // TODO add your handling code here:
        this.show(false);
        ViewRegistrars vr = new ViewRegistrars();
        vr.setVisible(true);
    }//GEN-LAST:event_viewRegistrarActionPerformed

    /**
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(ManageRegistrars.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(ManageRegistrars.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(ManageRegistrars.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(ManageRegistrars.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new ManageRegistrars().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton addRegistrar;
    private javax.swing.JButton deleteRegistrar;
    private javax.swing.JButton editRegistrar;
    private javax.swing.JButton exitButton;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JButton viewRegistrar;
    // End of variables declaration//GEN-END:variables
}
