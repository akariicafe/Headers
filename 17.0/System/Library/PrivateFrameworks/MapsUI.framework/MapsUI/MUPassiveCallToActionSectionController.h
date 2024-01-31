@class UIView, MUPlaceSectionView;

@interface MUPassiveCallToActionSectionController : MUCallToActionSectionController {
    MUPlaceSectionView *_sectionView;
    UIView *_suggestionView;
}

- (BOOL)hasContent;
- (void).cxx_destruct;
- (id)sectionView;
- (void)_instrumentUserAction:(int)a0;
- (void)_loadContentIfNeeded;
- (void)_unloadContent;
- (int)analyticsModuleType;
- (BOOL)isImpressionable;
- (void)updateSuggestionView;

@end
