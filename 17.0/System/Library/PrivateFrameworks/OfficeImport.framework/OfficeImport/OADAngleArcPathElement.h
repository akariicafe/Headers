@interface OADAngleArcPathElement : OADPathElement {
    struct OADAdjustPoint { struct OADAdjustCoord { BOOL isFormulaResult; int value; } x; struct OADAdjustCoord { BOOL isFormulaResult; int value; } y; } mCenter;
    struct OADAdjustPoint { struct OADAdjustCoord { BOOL isFormulaResult; int value; } x; struct OADAdjustCoord { BOOL isFormulaResult; int value; } y; } mSemiaxes;
    struct OADAdjustCoord { BOOL isFormulaResult; int value; } mStartAngle;
    struct OADAdjustCoord { BOOL isFormulaResult; int value; } mAngleLength;
    BOOL mConnectedToPrevious;
}

- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x0; int x1; } x0; struct OADAdjustCoord { BOOL x0; int x1; } x1; })center;
- (struct OADAdjustCoord { BOOL x0; int x1; })startAngle;
- (struct OADAdjustCoord { BOOL x0; int x1; })angleLength;
- (BOOL)connectedToPrevious;
- (id)initWithCenter:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x0; int x1; } x0; struct OADAdjustCoord { BOOL x0; int x1; } x1; })a0 semiaxes:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x0; int x1; } x0; struct OADAdjustCoord { BOOL x0; int x1; } x1; })a1 startAngle:(struct OADAdjustCoord { BOOL x0; int x1; })a2 angleLength:(struct OADAdjustCoord { BOOL x0; int x1; })a3 connectedToPrevious:(BOOL)a4;
- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x0; int x1; } x0; struct OADAdjustCoord { BOOL x0; int x1; } x1; })semiaxes;

@end
