@class NSString;

@interface INSystemAppMatch : NSObject

@property (readonly, nonatomic) NSString *iOSBundleIdentifier;
@property (readonly, nonatomic) NSString *macOSBundleIdentifier;
@property (readonly, nonatomic) NSString *watchOSBundleIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifierForCurrentPlatform;
@property (readonly, nonatomic) BOOL appIsUnavailableOnCurrentPlatform;

+ (id)matchWithiOSBundleIdentifier:(id)a0 macOSBundleIdentifier:(id)a1 watchOSBundleIdentifier:(id)a2;

- (id)initWithiOSBundleIdentifier:(id)a0 macOSBundleIdentifier:(id)a1 watchOSBundleIdentifier:(id)a2;
- (void).cxx_destruct;

@end
