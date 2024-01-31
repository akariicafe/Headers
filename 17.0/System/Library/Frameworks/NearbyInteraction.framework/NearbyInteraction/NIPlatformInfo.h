@interface NIPlatformInfo : NSObject

+ (BOOL)supportsAoA;
+ (BOOL)supportsUWB;
+ (BOOL)supportsSyntheticAperture;
+ (BOOL)isInternalBuild;
+ (BOOL)supportsNBAMMS;

@end
