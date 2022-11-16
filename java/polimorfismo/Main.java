/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package polimorfismo;

/**
 *
 * @author nohel
 */
public class Main {
    public static void main(String[] args) {
        Mascota mascotas[] = new Mascota[3];
        
        mascotas [0] = new Mascota("Shagui", "Pastor Aleman");
        mascotas [1] = new Perro("Aaron", "pequeña", 25);
        mascotas [2] = new Gato("Manchas", "fina", 35);
        
        System.out.println(mascotas[0].toString());
        System.out.println(mascotas[1].toString());
        System.out.println(mascotas[2].toString());
    }
}
