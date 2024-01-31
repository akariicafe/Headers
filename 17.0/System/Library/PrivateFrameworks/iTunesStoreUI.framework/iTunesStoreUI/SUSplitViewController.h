@class NSString, NSURL, SUSplitView, SUStructuredPage, SUPlaceholderViewController, SUGradient, UIViewController, SUShadow;

@interface SUSplitViewController : SUViewController {
    SUGradient *_placeholderGradient;
    SUPlaceholderViewController *_placeholderViewController;
    SUSplitView *_splitView;
    SUStructuredPage *_structuredPage;
}

@property (retain, nonatomic) NSURL *displayedURL;
@property (nonatomic) BOOL viewIsReady;
@property (retain, nonatomic) UIViewController *firstViewController;
@property (retain, nonatomic) UIViewController *secondViewController;
@property (retain, nonatomic) NSString *mainTitle;
@property (nonatomic) long long layoutType;
@property (nonatomic) double minimumPaneSize;
@property (nonatomic) double splitPosition;
@property (copy, nonatomic) SUShadow *splitShadow;
@property (nonatomic) BOOL usesSharedPlaceholder;
@property (nonatomic, getter=isVertical) BOOL vertical;

+ (BOOL)isValidSplitPositionValue:(id)a0;
+ (BOOL)isValidSplitTypeString:(id)a0;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)removeChildViewController:(id)a0;
- (void)addChildViewController:(id)a0;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)_reloadTitle;
- (void)_reloadView;
- (BOOL)isSkLoaded;
- (void)setSkLoading:(BOOL)a0;
- (void)storePage:(id)a0 finishedWithSuccess:(BOOL)a1;
- (void)_reloadWithStorePageDictionary:(id)a0;
- (id)splitTypeString;
- (void)_loadingDidChangeNotification:(id)a0;
- (void)_navigationItemDidChangeNotification:(id)a0;
- (id)_newGradientWithValue:(id)a0;
- (id)_newViewControllerFromDictionary:(id)a0;
- (void)_reloadLoadingState;
- (void)_reloadViewController:(id)a0 fromDictionary:(id)a1;
- (void)_setPlaceholderVisible:(BOOL)a0;
- (void)_setStructuredPage:(id)a0;
- (void)_setViewController:(id *)a0 toValue:(id)a1;
- (id)_splitView;
- (id)copyArchivableContext;
- (id)copyChildViewControllersForReason:(long long)a0;
- (id)copyScriptViewController;
- (id)newRotationController;
- (void)reloadWithStorePage:(id)a0 forURL:(id)a1;
- (void)restoreArchivableContext:(id)a0;
- (void)setSplitPositionAndLayoutTypeFromValue:(id)a0;
- (void)setSplitTypeString:(id)a0;
- (BOOL)shouldExcludeFromNavigationHistory;
- (id)splitPositionString;
- (id)storePageProtocol;

@end
