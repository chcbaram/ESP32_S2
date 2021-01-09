
#include "main.h"


extern "C" void app_main(void)
{
  printf("ESP32-S2 !\n");

  /* Print chip information */
  esp_chip_info_t chip_info;
  esp_chip_info(&chip_info);
  printf("This is %s chip with %d CPU cores, WiFi%s%s, ",
          CONFIG_IDF_TARGET,
          chip_info.cores,
          (chip_info.features & CHIP_FEATURE_BT) ? "/BT" : "",
          (chip_info.features & CHIP_FEATURE_BLE) ? "/BLE" : "");

  printf("silicon revision %d, ", chip_info.revision);

  printf("%dMB %s flash\n", spi_flash_get_chip_size() / (1024 * 1024),
          (chip_info.features & CHIP_FEATURE_EMB_FLASH) ? "embedded" : "external");

  printf("Free heap: %d\n", esp_get_free_heap_size());
  printf("CPU Freq : %d Mhz\n", bspGetCpuFreqMhz());
  delay(50);

  hwInit();
  apInit();
  apMain();
}
