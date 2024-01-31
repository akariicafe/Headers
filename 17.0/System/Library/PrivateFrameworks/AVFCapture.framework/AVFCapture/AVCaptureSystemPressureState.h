@class NSString, AVCaptureSystemPressureStateInternal;

@interface AVCaptureSystemPressureState : NSObject {
    AVCaptureSystemPressureStateInternal *_internal;
}

@property (readonly) NSString *level;
@property (readonly) unsigned long long factors;

+ (void)initialize;

- (id)initWithFigLevel:(int)a0 factors:(unsigned long long)a1 recommendedFrameRateRangeForPortrait:(id)a2;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)spiDebugDescription;
- (int)figLevel;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)recommendedFrameRateRangeForPortrait;

@end
