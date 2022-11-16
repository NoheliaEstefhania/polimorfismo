/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package polimorfismo_tipo;

/**
 *
 * @author nohel
 */
public class Gato implements Mascota{
    private String tipo;
    private String nombre;

    @Override
    public String comer() {
        return "gato comiendo";
    }
}