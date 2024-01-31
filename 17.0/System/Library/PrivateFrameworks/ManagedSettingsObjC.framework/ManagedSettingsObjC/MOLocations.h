@class NSURL;

@interface MOLocations : NSObject

@property (class, readonly) NSURL *effectiveSettingsPath;

+ (id)effectiveSettingsDirectory;
+ (id)sharedDirectory;

@end
