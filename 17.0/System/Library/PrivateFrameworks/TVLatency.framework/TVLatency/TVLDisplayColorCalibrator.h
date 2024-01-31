@class NSArray, NSString, CUMessageSession, TVLRGBColorDetector, NSNumber;

@interface TVLDisplayColorCalibrator : NSObject <TVLRGBColorDetectorDelegate>

@property (retain, nonatomic) TVLRGBColorDetector *colorDetector;
@property (retain, nonatomic) CUMessageSession *session;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSArray *detectorTarget;
@property (readonly, nonatomic) NSArray *detectorMargin;
@property (readonly, nonatomic) NSNumber *pitchMargin;
@property (readonly, nonatomic) NSNumber *yawMargin;
@property (readonly, nonatomic) NSNumber *maximumMotion;
@property (readonly, nonatomic) NSNumber *stationaryFrames;
@property (readonly, nonatomic) BOOL useSlowALS;
@property (readonly, nonatomic) unsigned long long role;
@property (copy, nonatomic) id /* block */ progressEventHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_tearDown;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (void)_invalidateWithError:(id)a0;
- (void)calibrate;
- (id)initWithMessageSession:(id)a0;
- (void)colorDetector:(id)a0 movementDetected:(double)a1;
- (void)_initWithMessageSession:(id)a0;
- (void)_postProgressEvent:(unsigned long long)a0 withInfo:(id)a1;
- (void)_respondAndInvalidateWithError:(id)a0 responseHandler:(id /* block */)a1;
- (void)_sendMessage:(id)a0 withResponse:(id /* block */)a1;
- (void)_startPositioning;
- (void)_startReadings;
- (void)colorDetector:(id)a0 backlightStateChanged:(BOOL)a1;
- (void)colorDetector:(id)a0 metThresholdConditionsWithColor:(id)a1;

@end
