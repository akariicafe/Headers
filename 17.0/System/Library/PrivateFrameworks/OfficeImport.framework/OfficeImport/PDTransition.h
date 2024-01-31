@class NSNumber, PDTransitionOptions;

@interface PDTransition : OADProperties {
    BOOL mHasType;
    int mType;
    BOOL mHasSpeed;
    int mSpeed;
    BOOL mHasAdvanceOnClick;
    BOOL mIsAdvanceOnClick;
    BOOL mHasAdvanceAfterTime;
    int mAdvanceAfterTime;
    PDTransitionOptions *mOptions;
}

@property (retain, nonatomic) NSNumber *duration;

- (void)setType:(int)a0;
- (id)init;
- (void)setOptions:(id)a0;
- (BOOL)hasType;
- (id)description;
- (id)options;
- (void).cxx_destruct;
- (void)setSpeed:(int)a0;
- (int)type;
- (int)speed;
- (BOOL)hasSpeed;
- (int)advanceAfterTime;
- (BOOL)hasAdvanceAfterTime;
- (BOOL)hasIsAdvanceOnClick;
- (BOOL)hasTransitionOptions;
- (BOOL)isAdvanceOnClick;
- (void)setAdvanceAfterTime:(int)a0;
- (void)setIsAdvanceOnClick:(BOOL)a0;

@end
