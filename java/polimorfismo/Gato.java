/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package polimorfismo;

/**
 *
 * @author nohel
 */
public class Gato extends Mascota {
    private int edad_gatuno;

    public Gato(String nombre, String raza, int edad_gatuno) {
        super(nombre, raza);
        this.edad_gatuno = edad_gatuno;
    }

    @Override
    public String toString() {
        return "Gato{" + " nombre: " +nombre + " raza: "+ raza +  " edad_gatuno: " + edad_gatuno + '}';
    }
    
    

}
