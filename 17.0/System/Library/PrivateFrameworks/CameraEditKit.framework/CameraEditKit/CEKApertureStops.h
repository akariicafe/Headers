@interface CEKApertureStops : NSObject

+ (id)validApertureValues;
+ (id)closestValidValueForAperture:(double)a0;
+ (unsigned long long)firstFullStopIndexAfterOrIncludingIndex:(unsigned long long)a0;
+ (unsigned long long)indexOfClosestValidValueForAperture:(double)a0;
+ (BOOL)isValidApertureIndex:(unsigned long long)a0;
+ (BOOL)isValidApertureIndexFullStop:(unsigned long long)a0;

@end
