@interface _TtCC7SwiftUI17HostingScrollView17PlatformContainer : UIView {
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ safeAreaHelper;
    void /* unknown type, empty encoding */ _safeAreaInsets;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsets;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_updateSafeAreaInsets;

@end
