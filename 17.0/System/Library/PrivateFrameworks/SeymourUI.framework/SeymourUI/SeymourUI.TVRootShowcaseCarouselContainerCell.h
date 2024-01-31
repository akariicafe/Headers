@class NSArray;

@interface SeymourUI.TVRootShowcaseCarouselContainerCell : UICollectionViewCell <SMUTVCarouselViewDataSource, SMUTVCarouselViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ carouselView;
    void /* unknown type, empty encoding */ pageControl;
    void /* unknown type, empty encoding */ preferredCenterIndex;
    void /* unknown type, empty encoding */ items;
    void /* unknown type, empty encoding */ onElementAppearance;
    void /* unknown type, empty encoding */ onElementDisappearance;
    void /* unknown type, empty encoding */ onImpressionableBoundsChange;
    void /* unknown type, empty encoding */ onVisibleBoundsChange;
    void /* unknown type, empty encoding */ itemCellIdentifier;
    void /* unknown type, empty encoding */ isUpdatingImpression;
    void /* unknown type, empty encoding */ impressionElements;
    void /* unknown type, empty encoding */ leftArrowButton;
    void /* unknown type, empty encoding */ rightArrowButton;
}

@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;

- (id)carouselView:(id)a0 cellForItemAtIndex:(long long)a1;
- (void)carouselView:(id)a0 didCenterItemAtIndex:(long long)a1;
- (void)carouselView:(id)a0 willDisplayCell:(id)a1 forItemAtIndex:(long long)a2;
- (long long)indexForPreferredCenteredViewInCarouselView:(id)a0;
- (long long)numberOfItemsInCarouselView:(id)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;

@end
