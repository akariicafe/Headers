@interface PXSectionsBlurController : NSObject {
    void /* unknown type, empty encoding */ blurrableSectionsSource;
}

@property (nonatomic) void /* unknown type, empty encoding */ behavior;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBlurrableSectionsSource:(id)a0;
- (void)updateSectionsBlurWithVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 safeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 interSectionSpacing:(double)a2;

@end
