@class CAPackage, CAStateController, UIView, CALayer;

@interface NCCAPackageView : UIView {
    CAPackage *_package;
    CAStateController *_stateController;
    UIView *_packageContentView;
    CALayer *_packageLayer;
}

@property (nonatomic) double scale;

- (void)removeAllStateChanges;
- (void).cxx_destruct;
- (void)setStateName:(id)a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setupPackageNamed:(id)a0 inBundle:(id)a1;
- (id)initWithPackageNamed:(id)a0 inBundle:(id)a1;

@end
