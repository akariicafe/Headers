@class RPTCoordinateSpaceConverter;

@interface RPTDragInteraction : NSObject <_RPTCoordinateSpaces, RPTInteraction>

@property (nonatomic) BOOL _locationsAreAlreadyScreenSpace;
@property (nonatomic) struct CGPoint { double x; double y; } sourceLocation;
@property (nonatomic) struct CGPoint { double x; double y; } destinationLocation;
@property (retain, nonatomic) RPTCoordinateSpaceConverter *conversion;

- (void).cxx_destruct;
- (id)_andThenDragBy:(struct CGVector { double x0; double x1; })a0;
- (id)initByDraggingWindow:(id)a0 byDelta:(struct CGVector { double x0; double x1; })a1;
- (id)initFromSourceLocation:(struct CGPoint { double x0; double x1; })a0 toDestinationLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)interactionByScalingBy:(double)a0;
- (void)invokeWithComposer:(id)a0 duration:(double)a1;
- (id)reversedInteraction;

@end
