@class NSString, NSUserDefaults;

@interface CHUISPreferences : NSObject {
    NSUserDefaults *_defaults;
}

@property (readonly, nonatomic) BOOL enableMemoryStressTestingWithGaspar;
@property (readonly, nonatomic) BOOL debugViewLabels;
@property (readonly, nonatomic) BOOL debugSnapshotViewColoring;
@property (readonly, nonatomic) BOOL debugPrefersStaticSnapshots;
@property (readonly, nonatomic) NSString *widgetRenderer;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
