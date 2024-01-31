@class NSMapTable, UIView;
@protocol SBIconListLayoutProvider;

@interface SBHWidgetSearchController : UISearchController {
    NSMapTable *_scrollProgressByClient;
}

@property (retain, nonatomic) UIView *searchBarBackgroundView;
@property (nonatomic) unsigned long long addWidgetSheetStyle;
@property (nonatomic) double textFieldExtraHeight;
@property (nonatomic) double textFieldToBarBackgroundBottomSpacing;
@property (readonly, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (readonly, nonatomic) UIView *searchBarTextFieldBackgroundView;
@property (nonatomic) double textFieldToWidgetsSpacing;
@property (nonatomic) BOOL alwaysShowBarBackground;
@property (nonatomic) BOOL shouldInsetContentForGrabber;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (id)_textFieldFont;
- (void)_setupTextField;
- (void)_setupSearchBar;
- (void)_setupBarBackground;
- (void)_setupTextFieldBackground;
- (void)_setupTextFieldMetrics;
- (double)grabberTopSpacing;
- (id)initWithListLayoutProvider:(id)a0 addWidgetSheetStyle:(unsigned long long)a1;
- (void)updateSearchBarBackgroundForScrollDistance:(double)a0 forClient:(id)a1;
- (void)updateSearchBarContentInsetsWithWidth:(double)a0;

@end
