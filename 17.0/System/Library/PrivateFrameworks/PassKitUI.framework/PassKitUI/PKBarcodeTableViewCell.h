@class PKPass, PKBarcodeStickerView;

@interface PKBarcodeTableViewCell : UITableViewCell {
    PKBarcodeStickerView *_barcodeStickerView;
    struct CGSize { double width; double height; } _maximumBarcodeSize;
}

@property (retain, nonatomic) PKPass *pass;
@property (nonatomic) long long barcodeStyle;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_computeMaxBarcodeSize;

@end
