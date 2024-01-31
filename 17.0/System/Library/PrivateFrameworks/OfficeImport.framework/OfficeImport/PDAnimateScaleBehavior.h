@interface PDAnimateScaleBehavior : PDAnimateBehavior {
    struct CGPoint { double x; double y; } mTo;
    struct CGPoint { double x; double y; } mFrom;
    struct CGPoint { double x; double y; } mBy;
    BOOL mHasTo;
    BOOL mHasFrom;
    BOOL mHasBy;
}

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setFrom:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)hasFrom;
- (struct CGPoint { double x0; double x1; })from;
- (BOOL)hasTo;
- (void)setTo:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })to;
- (struct CGPoint { double x0; double x1; })by;
- (void)setBy:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)hasBy;

@end
