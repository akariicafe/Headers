@class NSString;

@interface PaperKit.CompactSignatureStrokeWidthControl : UIControl <PaperKit.SignatureStrokeWidthWidget> {
    void /* unknown type, empty encoding */ unit;
    void /* unknown type, empty encoding */ strokePreviewWidth;
    void /* unknown type, empty encoding */ strokePreviewRotationAngle;
    void /* unknown type, empty encoding */ $__lazy_storage_$_strokeWidthPreview;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ width;
@property (nonatomic, readonly) NSString *unit;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL enabled;

- (BOOL)isSelected;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;

@end
