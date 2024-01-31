@class NSArray, NSString, GKSearchBar, NSNumber;
@protocol UISearchBarDelegate;

@interface GKSearchBarView : UICollectionReusableView <UISearchBarDelegate>

@property (retain, nonatomic) NSArray *searchBarConstraints;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double trailingMargin;
@property (retain, nonatomic) GKSearchBar *searchBar;
@property (retain, nonatomic) NSNumber *usePadConstraints;
@property (weak, nonatomic) id<UISearchBarDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)requiresConstraintBasedLayout;
+ (double)defaultHeight;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)applyLayoutAttributes:(id)a0;
- (void).cxx_destruct;
- (void)establishSearchBarConstraints;

@end
