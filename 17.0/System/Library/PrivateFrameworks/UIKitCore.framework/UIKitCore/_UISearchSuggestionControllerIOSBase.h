@class NSString, UISearchTextField, UISearchBar;

@interface _UISearchSuggestionControllerIOSBase : _UISearchSuggestionController <_UIGeometryChangeObserver>

@property (nonatomic) BOOL hasSetUpGeometryChangeResponse;
@property (readonly, weak, nonatomic) UISearchTextField *searchTextField;
@property (readonly, weak, nonatomic) UISearchBar *searchBar;
@property (readonly, nonatomic) BOOL hasVisibleMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSuggestions:(id)a0;
- (void)_dismissMenuWithoutAnimation;
- (id)suggestions;
- (void)updateSuggestions:(id)a0 userInitiated:(BOOL)a1;
- (BOOL)_hasVisibleMenu;
- (id)initWithSearchTextField:(id)a0;
- (void).cxx_destruct;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } x5; id x6; id x7; id x8; id x9; } *)a0 forAncestor:(id)a1;
- (void)menuDidCloseWithAnimator:(id)a0;
- (void)searchTextFieldDidGainSearchBar:(id)a0;
- (void)_updateMenuWithSuggestionGroups:(id)a0;
- (void)searchTextFieldWillMoveToWindow:(id)a0;

@end
