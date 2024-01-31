@class SUUIColorScheme, NSString, SUUIClientContext, UIView, NSMutableArray, UILabel;

@interface SUUIProductPageFeaturesView : UIView {
    UIView *_bottomBorderView;
    NSMutableArray *_featureViews;
    UILabel *_titleLabel;
    UIView *_topBorderView;
}

@property (nonatomic) long long features;
@property (nonatomic) unsigned long long gameCenterFeatures;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SUUIColorScheme *colorScheme;
@property (retain, nonatomic) SUUIClientContext *clientContext;

- (void)setBackgroundColor:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setFeatures:(long long)a0 gameCenterFeatures:(unsigned long long)a1;
- (id)_gameCenterStringWithFeatures:(unsigned long long)a0;

@end
