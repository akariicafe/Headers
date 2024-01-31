@class PGLayerHostView, PGHostedWindowHostingHandle;

@interface PGMicroPIPButtonView : UIView {
    PGLayerHostView *_layerHostView;
}

@property (retain, nonatomic) PGHostedWindowHostingHandle *hostedWindowHostingHandle;

+ (id)button;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
