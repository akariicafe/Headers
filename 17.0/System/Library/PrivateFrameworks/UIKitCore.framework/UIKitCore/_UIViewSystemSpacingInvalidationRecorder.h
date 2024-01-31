@class NSArray, NSString, NSMapTable, UIView;

@interface _UIViewSystemSpacingInvalidationRecorder : NSObject <_UIGeometryChangeObserver> {
    NSMapTable *_observingViewTable;
}

@property (readonly, weak, nonatomic) UIView *topView;
@property (readonly, weak, nonatomic) UIView *bottomView;
@property (readonly, nonatomic) NSArray *observingViews;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } x5; id x6; id x7; id x8; id x9; } *)a0 forAncestor:(id)a1;
- (id)_existingObservingViewTable;
- (id)_observingViewTable;
- (void)addObservingView:(id)a0;
- (id)initWithTopView:(id)a0 bottomView:(id)a1;
- (void)removeObservingView:(id)a0;

@end
