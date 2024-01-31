@interface PPLocationSupport : NSObject

+ (id)fullAddressOfLocation:(id)a0;
+ (BOOL)fuzzyMatchingLocations:(id)a0 and:(id)a1;
+ (id)locationFromThoroughfare:(id)a0 subThoroughfare:(id)a1 locality:(id)a2 subLocality:(id)a3 administrativeArea:(id)a4 postalCode:(id)a5 category:(unsigned short)a6;
+ (id)mapTitleForLocation:(id)a0;
+ (id)streetAddressOfLocation:(id)a0;

@end
