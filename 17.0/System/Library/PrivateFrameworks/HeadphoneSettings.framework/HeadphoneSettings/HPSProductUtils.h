@interface HPSProductUtils : NSObject

+ (BOOL)isRealityDevice;
+ (BOOL)isFeatureSupported:(int)a0 byProductId:(unsigned int)a1;
+ (id)getProductSpecificString:(unsigned int)a0 descriptionKey:(id)a1;
+ (BOOL)isAppleHeadphone:(id)a0;
+ (BOOL)isBeatsNonWx:(id)a0;
+ (BOOL)isFeatureSupported:(int)a0 byDevice:(id)a1;

@end
