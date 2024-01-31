@interface TSDTapGestureRecognizer : UITapGestureRecognizer {
    BOOL mSavedFirstTapLocation;
}

@property (readonly, nonatomic) struct CGPoint { double x; double y; } firstTapLocation;
@property (readonly, nonatomic) unsigned long long tapCount;

- (void)reset;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
