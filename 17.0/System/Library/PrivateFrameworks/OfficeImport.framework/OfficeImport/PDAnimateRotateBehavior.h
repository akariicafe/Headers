@interface PDAnimateRotateBehavior : PDAnimateBehavior {
    double mTo;
    double mFrom;
    double mBy;
    BOOL mHasTo;
    BOOL mHasFrom;
    BOOL mHasBy;
}

- (id)init;
- (void)setFrom:(double)a0;
- (BOOL)hasFrom;
- (double)from;
- (BOOL)hasTo;
- (void)setTo:(double)a0;
- (double)to;
- (double)by;
- (void)setBy:(double)a0;
- (BOOL)hasBy;

@end
