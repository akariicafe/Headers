@interface SBLiquidDetectionManager : NSObject {
    int _wetToken;
    BOOL _finishedInit;
}

@property (readonly, nonatomic, getter=isAccessoryPortWet) BOOL accessoryPortWet;
@property (readonly, nonatomic, getter=isDetectionEnabled) BOOL detectionEnabled;
@property (readonly, nonatomic, getter=isLiquidDetected) BOOL liquidDetected;

+ (id)sharedInstance;
+ (BOOL)showStatusBarIcon;

- (id)init;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (void)_stateDidUpdate;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_updateWetState;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)_finishInit;
- (BOOL)_showStatusBarIcon;
- (id)succinctDescription;
- (void)_updateStatusBar;

@end
