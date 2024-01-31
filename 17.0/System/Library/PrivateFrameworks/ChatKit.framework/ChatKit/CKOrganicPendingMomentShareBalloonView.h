@class CKOrganicImageLayoutRecipe;

@interface CKOrganicPendingMomentShareBalloonView : CKPendingMomentShareBalloonView

@property (retain, nonatomic) CKOrganicImageLayoutRecipe *layoutRecipe;

- (void)prepareForReuse;
- (void)prepareForDisplay;
- (void).cxx_destruct;

@end
