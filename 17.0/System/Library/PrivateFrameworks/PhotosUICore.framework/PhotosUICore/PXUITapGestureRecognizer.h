@class NSNumber;

@interface PXUITapGestureRecognizer : UITapGestureRecognizer {
    NSNumber *_initialEventType;
}

- (void)reset;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;

@end
