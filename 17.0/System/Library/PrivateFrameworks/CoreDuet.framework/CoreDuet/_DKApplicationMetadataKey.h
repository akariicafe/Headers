@interface _DKApplicationMetadataKey : NSObject

+ (id)extensionContainingBundleIdentifier;
+ (id)extensionHostIdentifier;
+ (id)launchReason;
+ (id)shortVersionString;
+ (id)isNativeArchitecture;
+ (id)exactBundleVersion;
+ (id)dyldPlatform;
+ (id)processIdentifier;
+ (id)backboardState;

@end
