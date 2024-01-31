@class NSDictionary;

@interface PCFeatureFlags : NSObject {
    NSDictionary *_features;
}

+ (id)sharedInstance;
+ (BOOL)checkFeature:(id)a0;
+ (void)overwriteFeatureFlags:(id)a0;
+ (void)setAllFeatureFlags:(id)a0;

- (void)dealloc;
- (BOOL)checkFeature:(id)a0;
- (void)overwriteFeatureFlags:(id)a0;
- (void)setAllFeatureFlags:(id)a0;

@end
