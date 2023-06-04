import java.util.Scanner;

public class test {

    public static void main(String[] args) {
        String opcao = "";
        Scanner input = new Scanner(System.in);

        while (!opcao.equals("0")) {
            System.out.println("1) Opcao 1");
            System.out.println("2) Opcao 2");
            System.out.println("3) Opcao 3");
            System.out.println("0) SAIR");
            System.out.print("Informe a opcao: ");
            opcao = input.nextLine();

            switch (opcao) {
                case "1":
                    System.out.println("Opcao 1 selecionada!");
                    break;
                case "2":
                    System.out.println("Opcao 2 selecionada!");
                    break;
                case "3":
                    System.out.println("Opcao 3 selecionada!");
                    break;
                case "0":
                    break;
                default:
                    System.out.println("Opcao invalida! Selecione uma opcao valida!");
                    break;
            }
        }
    }
}
