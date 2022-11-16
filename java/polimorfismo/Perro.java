/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package polimorfismo;

/**
 *
 * @author nohel
 */
public class Perro extends Mascota {
    private int edad_purruno;

    public Perro(String nombre, String raza, int edad_purruno) {
        super(nombre, raza);
        this.edad_purruno = edad_purruno;
    }

    @Override
    public String toString() {
        return "Perro{" + " nombre: " +nombre + " raza: "+ raza +  " edad_purruno: " + edad_purruno + '}';
    } 
}
