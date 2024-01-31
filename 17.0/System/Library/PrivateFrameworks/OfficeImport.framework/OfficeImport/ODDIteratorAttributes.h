@interface ODDIteratorAttributes : NSObject {
    int mAxis;
    int mPointType;
    BOOL mHideLastTransition;
    int mStart;
    unsigned int mCount;
    int mStep;
}

- (void)setStart:(int)a0;
- (void)setCount:(unsigned int)a0;
- (int)start;
- (void)setAxis:(int)a0;
- (void)setStep:(int)a0;
- (unsigned int)count;
- (int)axis;
- (int)step;
- (int)pointType;
- (BOOL)hideLastTransition;
- (void)setHideLastTransition:(BOOL)a0;
- (void)setPointType:(int)a0;

@end
