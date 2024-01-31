@class NSString;

@interface SBApplicationLaunchImageParameters : NSObject

@property (readonly, copy, nonatomic) NSString *defaultPNGName;
@property (readonly, copy, nonatomic) NSString *extension;
@property (readonly, copy, nonatomic) NSString *minOSVersionString;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) long long interfaceOrientation;

+ (id)launchImageParametersFromLaunchImagesInfo:(id)a0 withBundleIdentifier:(id)a1 isMonarchLinked:(BOOL)a2;
+ (id)validInfoPlistOrientationKeys;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
