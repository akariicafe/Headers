@interface ADSignpostUtils : NSObject

+ (void)markEndFrame:(BOOL)a0 name:(id)a1 mappingId:(unsigned long long)a2;
+ (void)markEndMeasurement;
+ (void)markStartFrame:(id)a0 mappingId:(unsigned long long)a1;
+ (void)markStartMeasurement;

@end
