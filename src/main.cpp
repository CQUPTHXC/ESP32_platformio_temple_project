/*
 * @LastEditors: qingmeijiupiao
 * @Description: 
 * @Author: qingmeijiupiao
 * @LastEditTime: 2024-12-15 21:01:36
 */

#include <Arduino.h>
#include "ESP_CAN.hpp"
#include "HXCthread.hpp"




HXC::thread<void>LED_state([](){
    int i=0;
});


HXC::thread<void> receive_and_send([](){
    constexpr const int send_address=0x123;
    while(true){
        /*接收数据*/
        float data=0;
        /*接收数据*/

        /*发送数据*/
        twai_message_t msg;
        msg.identifier = send_address;
        msg.data_length_code = 4;
        msg.extd=false;
        memcpy(msg.data,&data,4);
        auto err=twai_transmit(&msg,portMAX_DELAY);
        if(err!=ESP_OK){
            
        }
        /*发送数据*/
    }
});


void setup() {
    can_setup(6,7); 
    LED_state.start("LED_state");
}

void loop() {}

