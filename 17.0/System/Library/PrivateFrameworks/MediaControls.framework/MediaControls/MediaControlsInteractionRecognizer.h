@class MSVTimer;

@interface MediaControlsInteractionRecognizer : UIGestureRecognizer

@property (retain, nonatomic) MSVTimer *interactionTimer;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;

@end
