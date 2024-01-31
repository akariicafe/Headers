@class NSTimer, STUIStatusBarDisplayItemPlacement, STUIStatusBarRegion;
@protocol STUIStatusBarPillRegionVisualProvider;

@interface STUIStatusBarVisualProvider_PillRegionCoordinator : NSObject {
    BOOL _visualProviderImplementsBackgroundActivityPillAnimation;
}

@property (retain, nonatomic) NSTimer *backgroundActivityDetailTimer;
@property (weak, nonatomic) id<STUIStatusBarPillRegionVisualProvider> visualProvider;
@property (retain, nonatomic) STUIStatusBarDisplayItemPlacement *backgroundActivityDetailPlacement;
@property (retain, nonatomic) STUIStatusBarDisplayItemPlacement *pillIconPlacement;
@property (retain, nonatomic) STUIStatusBarRegion *pillRegion;

- (void)updatePill;
- (BOOL)handledUpdateOfActionable:(id)a0 highlighted:(BOOL)a1 initialPress:(BOOL)a2;
- (void)_updateBackgroundActivityWithEntry:(id)a0 timeEntry:(id)a1 needsUpdate:(BOOL)a2;
- (void)updateDataForBackgroundActivity:(id)a0;
- (void).cxx_destruct;
- (id)animationForBackgroundActivityPillWithDuration:(double)a0 scale:(double)a1;
- (void)updateRegion:(id)a0 highlighted:(BOOL)a1 initialPress:(BOOL)a2 cornerRadius:(double)a3;
- (id)animationForBackgroundActivityIcon;
- (void)_hideActivityDetailAndUpdate:(BOOL)a0;
- (id)animationForBackgroundActivityPill;

@end
