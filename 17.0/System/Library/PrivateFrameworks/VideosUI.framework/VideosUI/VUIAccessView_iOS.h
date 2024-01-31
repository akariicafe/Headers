@class UIStackView, NSString, NSArray, _TVCarouselView, UIButton, UILayoutGuide, UILabel, UIScrollView;

@interface VUIAccessView_iOS : UIView <TVCarouselViewDataSource> {
    NSArray *_apps;
    UILayoutGuide *_titlePlacementGuide;
    UIStackView *_scrollStack;
    UILabel *_titleLabel;
    UIScrollView *_bodyScroll;
    UILabel *_bodyLabel;
    UILabel *_secondaryBodyLabel;
    UIStackView *_logoStack;
    UIStackView *_bottomStack;
    UIButton *_allowButton;
    UIButton *_nackButton;
    UIButton *_seeAllButton;
    _TVCarouselView *_carouselView;
    BOOL _didLayout;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })iconSize;

- (void)dealloc;
- (void)setBody:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTitle:(id)a0;
- (void)setupView;
- (id)seeAllButton;
- (id)_buildLogoStack;
- (id)_buildCarousel;
- (id)_imageViewForIndex:(unsigned long long)a0;
- (id)allowButton;
- (id)bodyScroll;
- (id)carouselView:(id)a0 cellForItemAtIndex:(unsigned long long)a1;
- (id)initWithApps:(id)a0;
- (id)nackButton;
- (unsigned long long)numberOfItemsInCarouselView:(id)a0;
- (void)setSecondaryBody:(id)a0;
- (void)showNackScreen;

@end
