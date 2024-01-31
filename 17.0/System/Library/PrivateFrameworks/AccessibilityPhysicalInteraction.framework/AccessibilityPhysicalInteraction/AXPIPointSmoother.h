@class NSMutableArray;
@protocol AXPIPointSmootherClientDelegate;

@interface AXPIPointSmoother : NSObject

@property (retain, nonatomic) NSMutableArray *pointBuffer;
@property (nonatomic) unsigned long long framesPerSecond;
@property (nonatomic) unsigned long long lastTimePointAdded;
@property (nonatomic) unsigned long long lowFPSDetectedCount;
@property (weak, nonatomic) id<AXPIPointSmootherClientDelegate> delegate;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } point;
@property (nonatomic) BOOL useWeightedMovingAverage;
@property (nonatomic) unsigned long long bufferSize;
@property (nonatomic) double smoothingMaxDelta;
@property (nonatomic) BOOL shouldOffsetBufferPoints;
@property (nonatomic) double xOrder;
@property (nonatomic) double yOrder;
@property (nonatomic) double xOffset;
@property (nonatomic) double yOffset;

+ (struct CGPoint { double x0; double x1; })_averagePointsInArray:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)removeAllPoints;
- (struct CGSize { double x0; double x1; })_deltaForPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)updateFPS;

@end
