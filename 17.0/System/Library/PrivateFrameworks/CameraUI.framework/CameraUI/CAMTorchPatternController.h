@class CAMTorchPattern, CADisplayLink, CUCaptureController;

@interface CAMTorchPatternController : NSObject

@property (readonly, nonatomic) CUCaptureController *_captureController;
@property (nonatomic, getter=_isPerforming, setter=_setPerforming:) BOOL _performing;
@property (readonly, nonatomic) CAMTorchPattern *_currentPattern;
@property (readonly, nonatomic) double _startTime;
@property (readonly, nonatomic) CADisplayLink *_displayLink;
@property (nonatomic) double stepInterval;

- (void)blink;
- (void)stopPerformingPattern;
- (void)startPerformingPattern:(id)a0;
- (void)_resetTorchLevel;
- (id)initWithCaptureController:(id)a0;
- (void).cxx_destruct;
- (void)_applyTorchLevel:(float)a0;
- (void)doubleBlink;
- (void)displayLinkFired:(id)a0;

@end
