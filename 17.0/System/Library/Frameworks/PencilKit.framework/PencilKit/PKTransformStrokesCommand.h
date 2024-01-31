@class NSArray;

@interface PKTransformStrokesCommand : PKUndoCommand

@property (readonly, nonatomic) NSArray *strokes;
@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } strokeTransform;
@property (readonly, nonatomic) NSArray *strokeTransforms;

+ (id)commandForTransforming:(id)a0 drawing:(id)a1 strokeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2;
+ (id)commandForTransforming:(id)a0 drawing:(id)a1 strokeTransforms:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (void)applyToDrawing:(id)a0;
- (id)initWithStrokes:(id)a0 drawingUUID:(id)a1 actionName:(id)a2 strokeTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3;
- (id)initWithStrokes:(id)a0 drawingUUID:(id)a1 actionName:(id)a2 strokeTransforms:(id)a3;
- (id)invertedInDrawing:(id)a0;

@end
