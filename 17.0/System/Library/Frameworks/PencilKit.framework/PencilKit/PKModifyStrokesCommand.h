@class NSArray;

@interface PKModifyStrokesCommand : PKUndoCommand

@property (readonly, nonatomic) NSArray *strokes;
@property (readonly, nonatomic) BOOL hide;

+ (id)commandForErasingAllStrokesInDrawing:(id)a0;
+ (id)commandForErasingStrokes:(id)a0 drawing:(id)a1;
+ (id)commandForMakingStrokeVisible:(id)a0 drawing:(id)a1 hiding:(BOOL)a2;
+ (id)commandForMakingStrokesVisible:(id)a0 drawing:(id)a1 hiding:(BOOL)a2;

- (id)description;
- (void).cxx_destruct;
- (void)applyToDrawing:(id)a0;
- (id)initWithStrokes:(id)a0 drawingUUID:(id)a1 actionName:(id)a2 hiding:(BOOL)a3;
- (id)invertedInDrawing:(id)a0;

@end
