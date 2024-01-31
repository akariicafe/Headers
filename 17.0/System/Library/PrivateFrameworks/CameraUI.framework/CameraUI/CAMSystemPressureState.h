@class AVCaptureSystemPressureState;

@interface CAMSystemPressureState : NSObject

@property (readonly, nonatomic) AVCaptureSystemPressureState *_underlyingSystemPressureState;
@property (readonly, nonatomic) BOOL hasCameraTemperatureFactor;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCaptureSystemPressureState:(id)a0;
- (BOOL)isEqualToSystemPressureState:(id)a0;

@end
