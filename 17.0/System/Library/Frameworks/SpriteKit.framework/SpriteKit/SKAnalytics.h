@class NSString;

@interface SKAnalytics : NSObject {
    NSString *_bundleID;
}

+ (id)instance;

- (void).cxx_destruct;
- (id)getBundleID;
- (void)sendAnalyticsDataWithKey:(id)a0;

@end
