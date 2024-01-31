@protocol PEAsset, PELivePortraitBehaviorDelegate;

@interface PELivePortraitBehaviorController : NSObject

@property (retain, nonatomic) id<PEAsset> asset;
@property (weak, nonatomic) id<PELivePortraitBehaviorDelegate> delegate;
@property BOOL changingPortraitLightingDisablesLive;

- (void).cxx_destruct;
- (id)initWithAsset:(id)a0 delegate:(id)a1;
- (void)applySideEffectsForAction:(unsigned long long)a0 compositionController:(id)a1;

@end
