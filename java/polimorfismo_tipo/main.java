/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package polimorfismo_tipo;

/**
 *
 * @author nohel
 */
public class main {
    public static void main(String[] args) {
        Mascota mascotas[] = new Mascota[2];
        
        mascotas [0] = new Perro();
        mascotas [1] = new Gato();
   
        System.out.println(mascotas[0].comer());
        System.out.println(mascotas[1].comer());
    }    
}
