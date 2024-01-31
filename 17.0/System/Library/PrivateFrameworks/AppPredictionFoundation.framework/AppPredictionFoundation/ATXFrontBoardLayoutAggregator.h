@class NSMutableDictionary;

@interface ATXFrontBoardLayoutAggregator : NSObject {
    NSMutableDictionary *_bundleIdentifierToVisibilityMap;
}

- (id)init;
- (void).cxx_destruct;
- (id)fetchActiveApps;
- (BOOL)_isAppWithBundleIdentifierVisible:(id)a0;

@end
