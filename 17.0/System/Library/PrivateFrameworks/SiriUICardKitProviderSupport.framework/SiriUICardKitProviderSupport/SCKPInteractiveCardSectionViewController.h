@class CRKContainerCardSectionView;

@interface SCKPInteractiveCardSectionViewController : CRKCardSectionViewController

@property (retain, nonatomic) CRKContainerCardSectionView *view;

+ (id)cardSectionClasses;

- (void)_loadCardSectionView;
- (BOOL)_shouldRenderButtonOverlay;

@end
