public class ArrayOverflowExample {
    public static void main(String[] args) {
        // Crear un arreglo de tamaño 5
        int[] arr = new int[5];

        // Intentar acceder a un índice fuera de los límites del arreglo
        int index = 10;
        try {
            // Intentamos asignar un valor en un índice fuera del tamaño del arreglo
            arr[index] = 100;
        } catch (ArrayIndexOutOfBoundsException e) {
            // Capturamos la excepción de desbordamiento y mostramos un mensaje
            System.out.println("¡Error! Índice fuera de los límites del arreglo.");
            e.printStackTrace();
        }
    }
}