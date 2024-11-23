#include <stdio.h>
#include "nvs_flash.h"
#include "esp_event.h"
#include "esp_netif.h"
#include "esp_wifi.h"

void app_main(void)
{
    nvs_flash_init(); //初始化nvs_flash分区，专门用来存储键值对数据
    esp_event_loop_create_default(); //创建默认的事件循环
    //esp_idf默认开启freeRTOS

    //配置wifi的AP模式
    //esp_netif 
    //wifi esp32的一个外设 TCP/IP协议栈

    //初始化网卡的底层配置
    esp_netif_init();
    
    

 
}
