@class PDAnimationTarget, NSMutableArray;

@interface PDAnimateBehavior : PDTimeNode {
    PDAnimationTarget *mTgtElement;
}

@property (retain, nonatomic) NSMutableArray *attributeNames;

- (id)init;
- (unsigned long long)hash;
- (id)target;
- (id)description;
- (void)setTarget:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
