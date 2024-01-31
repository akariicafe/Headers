@protocol CACElementNamesOverlayManagerDelegate;

@interface CACElementNamesOverlayManager : CACSimpleContentViewManager

@property (weak, nonatomic) id<CACElementNamesOverlayManagerDelegate> delegate;

- (BOOL)isOverlay;
- (void).cxx_destruct;
- (void)showNamesForElements:(id)a0;
- (void)startDelayedDimmingOfNumbers;
- (void)stopDelayedDimmingOfNumbers;
- (id)voiceOverDescriptions;

@end
