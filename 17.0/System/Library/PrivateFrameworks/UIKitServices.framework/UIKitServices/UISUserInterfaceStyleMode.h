@protocol UISUserInterfaceStyleModeDelegate;

@interface UISUserInterfaceStyleMode : NSObject {
    id<UISUserInterfaceStyleModeDelegate> _delegate;
    BOOL _observingDefaults;
}

@property (nonatomic) long long modeValue;
@property (readonly, nonatomic) long long suggestedAutomaticModeValue;
@property (nonatomic) struct { long long x0; long long x1; } override;
@property (nonatomic) struct { struct { long long x0; long long x1; } x0; struct { long long x0; long long x1; } x1; } customSchedule;

- (void)dealloc;
- (id)_commonAnalyticsEventDictionary;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_setOverride:(struct { long long x0; long long x1; })a0 force:(BOOL)a1;

@end
