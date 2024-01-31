@class NSString;

@interface PosterBoard.PosterSectionHeaderView : UICollectionReusableView <PosterBoard.PosterPairObserver> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ posterPair;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ titleLabelSpacingFromBottomEdge;
}

@property (nonatomic, copy) NSString *title;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)posterPairDidUpdateLocalizedTitle:(id)a0;

@end
