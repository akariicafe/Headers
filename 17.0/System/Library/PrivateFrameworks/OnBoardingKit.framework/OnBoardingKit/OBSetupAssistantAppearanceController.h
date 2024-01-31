@interface OBSetupAssistantAppearanceController : OBWelcomeController

- (id)init;
- (void)_scrollViewDidLayoutSubviews:(id)a0;
- (BOOL)_scrollViewContentIsUnderTray;
- (BOOL)scrollViewContentIsUnderTray;
- (void)updateContentViewForScrollViewLayoutChange;

@end
