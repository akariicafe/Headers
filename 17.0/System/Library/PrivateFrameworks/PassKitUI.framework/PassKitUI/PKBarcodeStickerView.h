@class UIFont, UIImageView, UIImage, UILabel, NSMutableArray, PKBarcode;

@interface PKBarcodeStickerView : UIButton {
    PKBarcode *_barcode;
    UIImage *_barcodeImage;
    UIImageView *_matteView;
    UIImageView *_barcodeView;
    NSMutableArray *_stickerConstraints;
    NSMutableArray *_matteConstraints;
    UILabel *_altTextLabel;
    double _altContentInset;
    BOOL _barcodeViewInvalidated;
    long long _passStyle;
    UIImageView *_altImageView;
    BOOL _drawBarcode;
}

@property (nonatomic) long long validity;
@property (nonatomic) struct CGSize { double width; double height; } desiredBarcodeSize;
@property (nonatomic) BOOL shouldMatteCode;
@property (nonatomic) UIFont *altTextFont;
@property (nonatomic) double altTextInset;
@property (retain, nonatomic) UIImage *altImage;

+ (struct PKBarcodeQuietZone { double x0; double x1; double x2; double x3; })_quietZoneForBarcode:(id)a0;
+ (struct CGSize { double x0; double x1; })_sizeForBarcode:(id)a0 passStyle:(long long)a1;
+ (long long)validityStateForPass:(id)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_updateValidity;
- (void)_generateMatteRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 barcodeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 altContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2 boundingSize:(struct CGSize { double x0; double x1; })a3;
- (id)_resizedBarcode:(id)a0 desiredSize:(struct CGSize { double x0; double x1; })a1;
- (void)_setupAltImageView;
- (void)_setupAltTextLabel;
- (void)_updateDrawBarcode;
- (void)_updateMatteViewHiding;
- (struct CGSize { double x0; double x1; })_varianceForBarcode:(id)a0;
- (id)barcodeImage;
- (id)initWithBarcode:(id)a0 validityState:(long long)a1;
- (id)initWithBarcode:(id)a0 validityState:(long long)a1 passStyle:(long long)a2;

@end
