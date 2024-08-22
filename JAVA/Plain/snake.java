package Plain;

    import java.util.Random;
import java.util.Scanner;

public class snake {
    private static final int BOARD_SIZE = 100;
    private static final int NUM_SNAKES = 5;
    private static final int NUM_LADDERS = 5;

    private static int[] board = new int[BOARD_SIZE];
    private static int[] snakes = new int[NUM_SNAKES];
    private static int[] ladders = new int[NUM_LADDERS];

    public static void main(String[] args) {
        initializeBoard();
        playGame();
    }

    private static void initializeBoard() {
        
        for (int i = 0; i < BOARD_SIZE; i++) {
            board[i] = i + 1;
        }

    
        Random random = new Random();
        for (int i = 0; i < NUM_SNAKES; i++) {
            snakes[i] = random.nextInt(BOARD_SIZE - 10) + 10;
            board[snakes[i] - 1] = -1; 
        }

        for (int i = 0; i < NUM_LADDERS; i++) {
            ladders[i] = random.nextInt(BOARD_SIZE - 20) + 20;
            board[ladders[i] - 1] = 1; 
        }
    }

    private static void playGame() {
        Scanner scanner = new Scanner(System.in);
        int playerPosition = 1;

        while (true) {
            System.out.println("Current position: " + playerPosition);
            System.out.print("Roll the dice (1-6): ");
            int roll = scanner.nextInt();
            playerPosition += roll;
            if (board[playerPosition - 1] == -1) {
                System.out.println("Oh no! You landed on a snake!");
                playerPosition -= 10;
            } else if (board[playerPosition - 1] == 1) {
                System.out.println("Yay! You landed on a ladder!");
                playerPosition += 10;
            }

          
            if (playerPosition >= BOARD_SIZE) {
                System.out.println("Congratulations! You won!");
                break;
            }
        }
    }

}
