/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.salvadorpt2cowsandbulls;

import java.util.Scanner;

/**
 *
 * @author seans
 */
public class SalvadorPT2CowsandBulls {

    static String playerOneName, playerTwoName;
    static String firstPlayer, secondPlayer;
    static Scanner scn = new Scanner(System.in);
    static int option = 0;
    static int playerOneChoice = 0, playerTwoChoice = 0;
    static int currentGuess = 0;
    static int bulls = 0, cows = 0;
    static char[] validCharacters = new char[10];
    static char[] gameNumbers = new char[4];
    static char[] gameNumberGuesses = new char[4];
    static String[] ordinals = new String[]{"First","Second","Third","Fourth","Fifth","Sixth","Seventh","Eighth","Ninth","Tenth","Eleventh"};
    static int i = 0, j = 0;
    static boolean allowed = false;
    
    public static void main(String[] args) 
    {
        GameStart();
    }
    
    static void GameStart()
    {
        System.out.println("=============================================================");
        System.out.println();
        System.out.println("Welcome to Cows and Bulls!");
        System.out.println("You will require two players for this game.");
        System.out.println();
        System.out.print("Enter a name for Player One: ");
        playerOneName = scn.nextLine();
        System.out.print("Enter a name for Player Two: ");
        playerTwoName = scn.nextLine();
        System.out.println("\n");
        
        System.out.println("=============================================================");
        System.out.println();
        System.out.println("Welcome " + playerOneName + " and " + playerTwoName + "!");
        System.out.println("To begin your game of Cows and Bulls,");
        System.out.println("we will decide who will come up with the numbers through a game of Rock Paper Scissors");
        System.out.println();
        PlayerOneRockPaperScissors();
    }
    
    static void PlayerOneRockPaperScissors()
    {
        System.out.println("=============================================================");
        System.out.println();
        System.out.println(playerOneName + "'s turn");
        System.out.println("Choose your hand:");
        System.out.println("Enter 1 for Rock");
        System.out.println("Enter 2 for Paper");
        System.out.println("Enter 3 for Scissors");
        option = scn.nextInt();
        
        switch(option)
        {
            case 1:
                playerOneChoice = 1;
                System.out.println();
                System.out.println("Player " + playerOneName + " has chosen Rock");
                System.out.println("\n");
                PlayerTwoRockPaperScissors();
                break;
                
            case 2:
                playerOneChoice = 2;
                System.out.println();
                System.out.println("Player " + playerOneName + " has chosen Paper");
                System.out.println("\n");
                PlayerTwoRockPaperScissors();
                break;
            
            case 3:
                playerOneChoice = 3;
                System.out.println();
                System.out.println("Player " + playerOneName + " has chosen Scissors");
                System.out.println("\n");
                PlayerTwoRockPaperScissors();
                break;
                
            default:
                System.out.println("\n");
                System.out.println("Please enter a valid input.");
                System.out.println();
                PlayerOneRockPaperScissors();
        }
    }
    
    static void PlayerTwoRockPaperScissors()
    {
        System.out.println("=============================================================");
        System.out.println();
        System.out.println(playerTwoName + "'s turn");
        System.out.println("Choose your hand:");
        System.out.println("Enter 1 for Rock");
        System.out.println("Enter 2 for Paper");
        System.out.println("Enter 3 for Scissors");
        option = scn.nextInt();
        
        switch(option)
        {
            case 1:
                playerTwoChoice = 1;
                System.out.println();
                System.out.println("Player " + playerTwoName + " has chosen Rock");
                System.out.println("\n");
                RockPaperScissorsResult();
                break;
                
            case 2:
                playerTwoChoice = 2;
                System.out.println();
                System.out.println("Player " + playerTwoName + " has chosen Paper");
                System.out.println("\n");
                RockPaperScissorsResult();
                break;
            
            case 3:
                playerTwoChoice = 3;
                System.out.println();
                System.out.println("Player " + playerTwoName + " has chosen Scissors");
                System.out.println("\n");
                RockPaperScissorsResult();
                break;
                
            default:
                System.out.println("\n");
                System.out.println("Please enter a valid input.");
                System.out.println();
                PlayerTwoRockPaperScissors();
        }
    }
    
    static void RockPaperScissorsResult()
    {
        if(playerOneChoice == playerTwoChoice)
        {
            System.out.println("We have a tie!");
            System.out.println("Please try again");
            System.out.println();
            PlayerOneRockPaperScissors();
        } 
        else if(playerOneChoice == 1 && playerTwoChoice == 3)
        {
            System.out.println();
            System.out.println("Player " + playerOneName + " Wins!");
            firstPlayer = playerOneName;
            secondPlayer = playerTwoName;
        }
        else if(playerOneChoice == 2 && playerTwoChoice == 1)
        {
            System.out.println();
            System.out.println("Player " + playerOneName + " Wins!");
            firstPlayer = playerOneName;
            secondPlayer = playerTwoName;
        }
        else if(playerOneChoice == 3 && playerTwoChoice == 2)
        {
            System.out.println();
            System.out.println("Player " + playerOneName + " Wins!");
            firstPlayer = playerOneName;
            secondPlayer = playerTwoName;
        }
        else if(playerOneChoice == 1 && playerTwoChoice == 2)
        {
            System.out.println();
            System.out.println("Player " + playerTwoName + " Wins!");
            firstPlayer = playerTwoName;
            secondPlayer = playerOneName;
        }
        else if(playerOneChoice == 2 && playerTwoChoice == 3)
        {
            System.out.println();
            System.out.println("Player " + playerTwoName + " Wins!");
            firstPlayer = playerTwoName;
            secondPlayer = playerOneName;
        }
        else if(playerOneChoice == 3 && playerTwoChoice == 1)
        {
            System.out.println();
            System.out.println("Player " + playerTwoName + " Wins!");
            firstPlayer = playerTwoName;
            secondPlayer = playerOneName;
        }
        CowsAndBullsSetup();
    }
    
    static void CowsAndBullsSetup()
    {
        for(i = 0; i < 10; ++i)
        {
            validCharacters[i] = (char)(i + '0');
        }
        CowsAndBullsStart();
    }
    
    static void CowsAndBullsStart()
    {
        System.out.println("=============================================================");
        System.out.println();
        System.out.println("Player " + firstPlayer + " will now choose the 4 digits to be used in this game of cows and bulls");
        System.out.println("(ONLY NUMBERS FROM 0-9 ARE ALLOWED!)");
        for(i = 0; i < 4; ++i)
        {
            System.out.print(ordinals[i] + " digit:\t");
            gameNumbers[i] = scn.next().charAt(0); 
            
            for(j = 0; j < 10; ++j)
            {
                if(gameNumbers[i] == validCharacters[j])
                {
                    allowed = true;
                }
            }
            
            if(allowed == false)
            {
                System.out.println("\n\n");
                System.out.println("Please input valid numbers and try again");
                CowsAndBullsStart();
            }
        }
        
        System.out.print("The secret code is ");
        for(i = 0; i < 4; ++i)
        {
            System.out.print(gameNumbers[i]);
        }
        
        System.out.println("\n\n\n");
        CowsAndBullsGuess();
    }
    
    static void CowsAndBullsGuess()
    {
        System.out.println("Player " + secondPlayer + " will now try to guess the 4 digit secret code of player " + firstPlayer + "!");
        System.out.println("REMEMBER! YOU ONLY HAVE 10 GUESSES!");
        do{
            currentGuess++;
            cows = 0;
            bulls = 0;
            System.out.println("=============================================================");
            System.out.println();
            System.out.println(ordinals[currentGuess - 1] + " attempt:\n");
            for(i = 0; i < 4; ++i)
            {
                System.out.print(ordinals[i] + " digit guess:\t");
                gameNumberGuesses[i] = scn.next().charAt(0);

                for(j = 0; j < 4; ++j)
                {
                    if(gameNumberGuesses[i] == gameNumbers[j])
                    {
                        cows++;
                    }
                    
                    if(gameNumberGuesses[i] == gameNumbers[j] && i == j)
                    {
                        bulls++;
                    }
                }
            }
            cows = cows - bulls;
            
            if(cows <= -1)
            {
               cows = 0;
            }
            
            System.out.println("Cows: " + cows + "  Bulls: " + bulls);
            System.out.print(ordinals[currentGuess - 1] + " guess: ");
            System.out.println(gameNumberGuesses);
            if(bulls >= 4)
            {
                WinScreen();
            }
        }while(currentGuess <= 9);
        
        System.out.println();
        System.out.println("=============================================================");
        System.out.println();
        System.out.println("Player " + secondPlayer + " has lost the game");
        System.out.println("And player " + firstPlayer + " has won!");
        System.out.print("The secret code was ");
        for(i = 0; i < 4; ++i)
        {
            System.out.print(gameNumbers[i]);
        }
        System.out.println();
        System.out.println("Thank you for playing!");
        System.out.println();
        System.out.println("=============================================================");
        System.out.println();
        System.exit(0);
    }
    
    static void WinScreen()
    {
        System.out.println();
        System.out.println("=============================================================");
        System.out.println();
        System.out.println("4 Bulls! Player " + secondPlayer + " has won the game!");
        System.out.println("And player " + firstPlayer + " has lost");
        System.out.print("The secret code was ");
        for(i = 0; i < 4; ++i)
        {
            System.out.print(gameNumbers[i]);
        }
        System.out.println();
        System.out.println("Thank you for playing!");
        System.out.println();
        System.out.println("=============================================================");
        System.out.println();
        System.exit(0);
    }
}
