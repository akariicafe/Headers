@class CSAttSiriGazeAreaOfInterest;

@interface CSAttSiriGazeEvent : NSObject

@property (readonly) CSAttSiriGazeAreaOfInterest *aoi;
@property (readonly) unsigned long long gazeState;
@property (readonly) unsigned long long eventTimestamp;
@property (readonly) struct CGPoint { double x; double y; } gazePoint;

- (void).cxx_destruct;
- (id)initWithArea:(id)a0 state:(unsigned long long)a1 timestamp:(unsigned long long)a2;
- (id)initWithAreaAndPoint:(id)a0 gazePoint:(struct CGPoint { double x0; double x1; })a1 state:(unsigned long long)a2 timestamp:(unsigned long long)a3;

@end
