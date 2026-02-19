package estruturadedados.aula01;

public class Aula01_02_BuscaLinear {
    public static void main(String[] args) {
        int[] v = {10, 20, 30, 40, 50};
        int n = 5;
        int chave = 30;

        int i = 0;
        while (i < n && v[i] != chave)
            i++;

        if (i < n)
            System.out.println("Encontrado no indice " + i);
        else
            System.out.println("Nao encontrado");
    }
}
