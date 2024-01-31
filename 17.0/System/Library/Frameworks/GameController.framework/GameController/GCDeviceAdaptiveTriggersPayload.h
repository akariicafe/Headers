@class NSNumber, NSArray;

@interface GCDeviceAdaptiveTriggersPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *mode;
@property (readonly, nonatomic) NSNumber *startPosition;
@property (readonly, nonatomic) NSNumber *endPosition;
@property (readonly, nonatomic) NSArray *strengths;
@property (readonly, nonatomic) NSArray *amplitudes;
@property (readonly, nonatomic) NSNumber *frequency;

- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initOff;
- (BOOL)hasEqualAmplitudes:(id)a0;
- (BOOL)hasEqualStrengths:(id)a0;
- (id)initFeedbackWithResistiveStrengths:(struct { float x0[10]; })a0;
- (id)initFeedbackWithStartPosition:(float)a0 resistiveStrength:(float)a1;
- (id)initSlopeFeedbackWithStartPosition:(float)a0 endPosition:(float)a1 startStrength:(float)a2 endStrength:(float)a3;
- (id)initVibrationWithAmplitudes:(struct { float x0[10]; })a0 frequency:(float)a1;
- (id)initVibrationWithStartPosition:(float)a0 amplitude:(float)a1 frequency:(float)a2;
- (id)initWeaponWithStartPosition:(float)a0 endPosition:(float)a1 resistiveStrength:(float)a2;

@end
