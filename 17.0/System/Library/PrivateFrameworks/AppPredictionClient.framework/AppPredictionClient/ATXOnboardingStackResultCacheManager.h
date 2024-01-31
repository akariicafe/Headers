@class NSString, NSDictionary;

@interface ATXOnboardingStackResultCacheManager : NSObject {
    NSString *_path;
    BOOL _isiPad;
    NSDictionary *_appLaunchCounts;
}

- (id)init;
- (void).cxx_destruct;
- (id)fetchOnboardingStackResultCache;
- (id)_generateResultCacheWithWidgetCache:(id)a0;
- (id)_resultFromOnboardingStacks:(id)a0;
- (BOOL)_writeOnboardingStackResultCache:(id)a0;
- (id)initWithPath:(id)a0 isiPad:(BOOL)a1;
- (BOOL)updateCacheWithActivity:(id)a0 widgetCache:(id)a1;

@end
