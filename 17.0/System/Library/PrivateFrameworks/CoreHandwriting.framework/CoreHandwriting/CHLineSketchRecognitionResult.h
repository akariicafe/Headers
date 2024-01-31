@class NSArray;

@interface CHLineSketchRecognitionResult : CHSketchRecognitionResult

@property (readonly) int startEndpointType;
@property (readonly) int endEndpointType;
@property (readonly) struct CGPoint { double x; double y; } startLocation;
@property (readonly) struct CGPoint { double x; double y; } endLocation;
@property (readonly) struct CGPoint { double x; double y; } midpointLocation;
@property (readonly) struct CGPoint { double x; double y; } controlPoint;
@property (readonly) NSArray *pathPoints;
@property (readonly) BOOL cornerLine;

- (void).cxx_destruct;
- (id)initWithString:(id)a0 score:(double)a1 rotation:(double)a2 startLocation:(struct CGPoint { double x0; double x1; })a3 startEndpointType:(int)a4 endLocation:(struct CGPoint { double x0; double x1; })a5 endEndpointType:(int)a6 midPointLocation:(struct CGPoint { double x0; double x1; })a7 controlPointLocation:(struct CGPoint { double x0; double x1; })a8;
- (id)initWithString:(id)a0 score:(double)a1 rotation:(double)a2 startLocation:(struct CGPoint { double x0; double x1; })a3 startEndpointType:(int)a4 endLocation:(struct CGPoint { double x0; double x1; })a5 endEndpointType:(int)a6 midPointLocation:(struct CGPoint { double x0; double x1; })a7 controlPointLocation:(struct CGPoint { double x0; double x1; })a8 pathPoints:(id)a9;

@end
