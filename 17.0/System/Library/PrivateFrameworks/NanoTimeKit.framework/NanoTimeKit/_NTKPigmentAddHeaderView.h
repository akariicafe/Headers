@class UILabel;

@interface _NTKPigmentAddHeaderView : UICollectionViewCell {
    UILabel *_label;
}

+ (id)_font;
+ (id)reuseIdentifier;

- (void)dealloc;
- (void)setName:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_fontSizeDidChange;

@end
