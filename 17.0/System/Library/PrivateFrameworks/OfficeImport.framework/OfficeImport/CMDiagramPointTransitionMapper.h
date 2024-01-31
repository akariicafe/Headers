@class NSDictionary;

@interface CMDiagramPointTransitionMapper : CMDiagramPointMapper {
    int mShapeType;
    NSDictionary *mAdjustValues;
}

- (void).cxx_destruct;
- (id)initWithPoint:(id)a0 drawingContext:(id)a1 orientedBounds:(id)a2 shapeType:(int)a3 adjustValues:(id)a4 parent:(id)a5;
- (id)initWithPoint:(id)a0 drawingContext:(id)a1 orientedBounds:(id)a2 shapeType:(int)a3 parent:(id)a4;
- (void)mapAt:(id)a0 withState:(id)a1;

@end
