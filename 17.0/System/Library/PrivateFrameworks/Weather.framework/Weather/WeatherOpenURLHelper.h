@interface WeatherOpenURLHelper : NSObject

+ (id)transientCityFromURLComponents:(id)a0;
+ (id)URLForCity:(id)a0;
+ (id)URLForWeatherCityComponents:(id)a0;
+ (id)cityFromURL:(id)a0 withContainerViewController:(id)a1;
+ (id)cityFromURLComponents:(id)a0 listedCities:(id)a1;
+ (void)displayCity:(id)a0 usingController:(id)a1 completion:(id /* block */)a2;
+ (BOOL)handleOpenURL:(id)a0 withContainerViewController:(id)a1;
+ (BOOL)handleOpenURL:(id)a0 withContainerViewController:(id)a1 completion:(id /* block */)a2;
+ (void)presentAddTransientCityDialog:(id)a0 usingController:(id)a1;

@end
