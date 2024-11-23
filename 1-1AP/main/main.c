#include <stdio.h>
#include "nvs_flash.h"
#include "esp_event.h"
#include "esp_netif.h"
#include "esp_wifi.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    nvs_flash_init();
    esp_event_loop_create_default();//创建默认事件循环

    //在循环里每1s打印一次hello world
    while(1)
    {
        printf("hello world\n");
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }

}
