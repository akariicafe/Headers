@class NSMutableArray, ODDOtherwise;

@interface ODDChoose : ODDLayoutObject {
    NSMutableArray *mWhens;
    ODDOtherwise *mOtherwise;
}

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)otherwise;
- (void)addWhen:(id)a0;
- (void)setOtherwise:(id)a0;
- (id)whens;

@end
