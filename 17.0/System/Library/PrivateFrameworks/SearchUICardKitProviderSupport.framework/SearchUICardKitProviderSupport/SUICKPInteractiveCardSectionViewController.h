@interface SUICKPInteractiveCardSectionViewController : CRKCardSectionViewController

+ (id)cardSectionClasses;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)didEngageCardSection:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldRenderButtonOverlay;
- (BOOL)_expectsSearchUIView;

@end
