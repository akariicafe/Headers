@class SBSearchBackdropView;

@interface SBCoverSheetSpotlightBackgroundView : UIView <SBSpotlightBackgroundWeighting>

@property (readonly, nonatomic) SBSearchBackdropView *searchBlurBackdropView;
@property (nonatomic) double spotlightBackgroundWeighting;

- (id)init;
- (void).cxx_destruct;

@end
