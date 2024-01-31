@class SUGradient, SULoadingView, SUGradientView;

@interface SUPlaceholderViewController : SUViewController {
    BOOL _hideLoadingView;
    SULoadingView *_loadingView;
    SUGradientView *_gradientView;
}

@property (copy, nonatomic) SUGradient *backgroundGradient;
@property (copy, nonatomic) SUGradient *defaultBackgroundGradient;
@property (readonly, nonatomic) SULoadingView *loadingView;
@property (nonatomic) BOOL shouldShowLoadingView;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (void)setScriptProperties:(id)a0;
- (void)setSkLoading:(BOOL)a0;
- (void)_bagDidLoadNotification:(id)a0;
- (id)_copyActiveGradient;
- (id)_newURLBagBackgroundGradient;
- (void)_reloadBackgroundGradient;
- (void)_reloadLoadingView;
- (id)copyArchivableContext;
- (id)copyDefaultScriptProperties;
- (void)parentViewControllerHierarchyDidChange;

@end
