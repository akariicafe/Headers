@protocol ICDocCamImageQuadEditPanGestureRecognizerDelegate;

@interface ICDocCamImageQuadEditPanGestureRecognizer : UIPanGestureRecognizer

@property (weak, nonatomic) id<ICDocCamImageQuadEditPanGestureRecognizerDelegate> quadEditorDelegate;

- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
