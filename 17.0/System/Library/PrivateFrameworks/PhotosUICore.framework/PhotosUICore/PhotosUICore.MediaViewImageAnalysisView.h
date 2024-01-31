@interface PhotosUICore.MediaViewImageAnalysisView : UIView <PXGReusableView> {
    void /* unknown type, empty encoding */ interaction;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ userData;
@property (nonatomic) void /* unknown type, empty encoding */ clippingRect;

- (id)init;
- (void)prepareForReuse;
- (void)becomeReusable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
