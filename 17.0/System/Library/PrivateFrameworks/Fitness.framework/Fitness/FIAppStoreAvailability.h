@interface FIAppStoreAvailability : NSObject

+ (void)isFitnessPlusStorefrontContentAvailableWithCompletion:(id /* block */)a0;
+ (void)_isSupportedDeviceAvailableWithCompletion:(id /* block */)a0;
+ (BOOL)_isDeviceTablet;
+ (void)fetchIsFitnessAvailableForDeviceWithCompletion:(id /* block */)a0;

@end
