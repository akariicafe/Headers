@class CEKAdditiveAnimator, CAMLevelViewModel, NSString;

@interface CAMGridView : UIView <CAMLevelViewModelChangeObserver, CEKAdditiveAnimatorDelegate>

@property (retain, nonatomic) CEKAdditiveAnimator *_animator;
@property (retain, nonatomic) CAMLevelViewModel *levelViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didPublishChange:(unsigned long long)a1 withContext:(void *)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)animator:(id)a0 didUpdateValuesForKeys:(id)a1;
- (void)_drawLinesWithInset:(float)a0;
- (void)_getDeltasBetweenLines:(out double *)a0 widthDelta:(out double *)a1;
- (void)_setAnimatorGridOffsetForViewModel:(id)a0 animated:(BOOL)a1;

@end
