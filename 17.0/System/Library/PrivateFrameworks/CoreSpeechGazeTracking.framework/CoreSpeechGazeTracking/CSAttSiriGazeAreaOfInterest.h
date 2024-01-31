@class CSAttSiriGazeTrackingTimedPulses;

@interface CSAttSiriGazeAreaOfInterest : NSObject {
    CSAttSiriGazeTrackingTimedPulses *_pulses;
}

@property (readonly, nonatomic) unsigned long long gazeState;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } activeRegion;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } activeRegionWithPadding;

- (void)_reset;
- (void)_setLabel:(id)a0;
- (void).cxx_destruct;
- (id)descriptionRect;
- (BOOL)_hadGazeFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (BOOL)_mouthOpeningsFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)_updateState:(unsigned long long)a0 withTimestamp:(unsigned long long)a1;
- (id)initWithActiveRegion:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
