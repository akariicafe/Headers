@interface OADAdjustRect : NSObject {
    struct OADAdjustCoord { BOOL isFormulaResult; int value; } mLeft;
    struct OADAdjustCoord { BOOL isFormulaResult; int value; } mTop;
    struct OADAdjustCoord { BOOL isFormulaResult; int value; } mRight;
    struct OADAdjustCoord { BOOL isFormulaResult; int value; } mBottom;
}

- (struct OADAdjustCoord { BOOL x0; int x1; })left;
- (struct OADAdjustCoord { BOOL x0; int x1; })right;
- (struct OADAdjustCoord { BOOL x0; int x1; })top;
- (id)description;
- (struct OADAdjustCoord { BOOL x0; int x1; })bottom;
- (id)initWithLeft:(struct OADAdjustCoord { BOOL x0; int x1; })a0 top:(struct OADAdjustCoord { BOOL x0; int x1; })a1 right:(struct OADAdjustCoord { BOOL x0; int x1; })a2 bottom:(struct OADAdjustCoord { BOOL x0; int x1; })a3;

@end
