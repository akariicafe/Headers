@class NSString, WFMatchedAppIconColorData;

@interface WFAppIconColorMatcher : NSObject

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) WFMatchedAppIconColorData *cachedColor;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (id)matchedColor;

@end
