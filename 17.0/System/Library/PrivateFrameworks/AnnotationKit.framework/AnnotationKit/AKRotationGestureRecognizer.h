@class AKController;

@interface AKRotationGestureRecognizer : UIRotationGestureRecognizer {
    unsigned long long tries;
}

@property (weak, nonatomic) AKController *annotationController;

- (void)setState:(long long)a0;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;

@end
