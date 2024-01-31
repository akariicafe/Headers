@class NSUserDefaults;

@interface MDUserOverrideHeuristic : NSObject <MDModeHeuristic> {
    NSUserDefaults *_internalDefaults;
}

- (id)init;
- (void).cxx_destruct;
- (id)determineCurrentMode;
- (id)initWithInternalDefaults:(id)a0;
- (unsigned long long)internalModeOverride;

@end
