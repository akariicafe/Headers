@class UIView, _UISearchBarSearchContainerLayout;
@protocol _UISearchBarContainerSublayoutDelegate;

@interface _UISearchBarScopeContainerLayout : _UISearchBarLayoutBase

@property (weak, nonatomic) id<_UISearchBarContainerSublayoutDelegate> delegate;
@property (nonatomic, getter=isCollapsed) BOOL collapsed;
@property (retain, nonatomic) _UISearchBarSearchContainerLayout *neighboringSearchLayout;
@property (retain, nonatomic) UIView *scopeBar;
@property (nonatomic) BOOL hasScopeBar;
@property (nonatomic) unsigned long long numberOfScopeTitles;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } containerSpecificInsets;
@property (readonly, nonatomic) double naturalContainerHeight;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } scopeBarLayoutFrame;
@property (readonly, nonatomic) double scopeBarOpacity;

- (void)updateLayout;
- (id)description;
- (double)scopeControlHeight;
- (void).cxx_destruct;
- (void)applyLayout;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
