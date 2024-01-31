@interface PosterBoard.AmbientEditButton : UIButton {
    void /* unknown type, empty encoding */ outerRing;
    void /* unknown type, empty encoding */ innerRing;
    void /* unknown type, empty encoding */ contentStyleCoordinator;
    void /* unknown type, empty encoding */ contentStyleItemView;
    void /* unknown type, empty encoding */ contentStyle;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } alignmentRectInsets;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
