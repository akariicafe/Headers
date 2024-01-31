@class NSString, NSDictionary;

@interface WFActionSessionKitSessionConfiguration : NSObject {
    NSDictionary *_toastDurationPerRunSource;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 toastDurationPerRunSource:(id)a1;
- (double)toastDurationForRunSource:(id)a0;

@end
