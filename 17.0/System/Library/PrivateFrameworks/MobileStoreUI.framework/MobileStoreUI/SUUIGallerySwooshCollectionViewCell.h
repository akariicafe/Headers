@class UIColor, NSString, UIView, UILabel;

@interface SUUIGallerySwooshCollectionViewCell : UICollectionViewCell {
    UIColor *_titleColor;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIView *contentChildView;
@property (copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setColoringWithColorScheme:(id)a0;

@end
