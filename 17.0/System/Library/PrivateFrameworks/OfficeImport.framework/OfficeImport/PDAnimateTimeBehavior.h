@class NSString;

@interface PDAnimateTimeBehavior : PDAnimateBehavior {
    NSString *mTo;
    NSString *mFrom;
    NSString *mBy;
    BOOL mHasCalcMode;
    int mCalcMode;
    BOOL mHasValueType;
    int mValueType;
}

- (id)init;
- (void)setValueType:(int)a0;
- (int)valueType;
- (BOOL)hasValueType;
- (void).cxx_destruct;
- (void)setFrom:(id)a0;
- (id)from;
- (void)setTo:(id)a0;
- (id)to;
- (id)by;
- (void)setBy:(id)a0;
- (int)calcMode;
- (BOOL)hasCalcMode;
- (void)setCalcMode:(int)a0;

@end
