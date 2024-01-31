@interface WebSelectionRect : NSObject <NSCopying>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (nonatomic) int writingDirection;
@property (nonatomic) BOOL isLineBreak;
@property (nonatomic) BOOL isFirstOnLine;
@property (nonatomic) BOOL isLastOnLine;
@property (nonatomic) BOOL containsStart;
@property (nonatomic) BOOL containsEnd;
@property (nonatomic) BOOL isInFixedPosition;
@property (nonatomic) BOOL isHorizontal;

+ (id)selectionRect;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })endEdge:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })startEdge:(id)a0;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
