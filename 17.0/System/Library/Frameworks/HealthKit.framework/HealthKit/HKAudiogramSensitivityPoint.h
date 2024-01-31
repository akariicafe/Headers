@class HKQuantity;

@interface HKAudiogramSensitivityPoint : NSObject <NSSecureCoding> {
    HKQuantity *_frequency;
    HKQuantity *_leftEarSensitivity;
    HKQuantity *_rightEarSensitivity;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) HKQuantity *frequency;
@property (readonly, copy) HKQuantity *leftEarSensitivity;
@property (readonly, copy) HKQuantity *rightEarSensitivity;

+ (id)_incompatibleUnit:(id)a0 incompatibleWith:(id)a1;
+ (id)_rangeViolationMin:(id)a0 max:(id)a1 value:(id)a2;
+ (BOOL)_validateUnitForFrequency:(id)a0;
+ (BOOL)_validateUnitForSensitivity:(id)a0;
+ (id)sensitivityPointWithFrequency:(id)a0 leftEarSensitivity:(id)a1 rightEarSensitivity:(id)a2 error:(id *)a3;
+ (BOOL)validFrequency:(id)a0 error:(id *)a1;
+ (BOOL)validSensitivity:(id)a0 error:(id *)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrequency:(id)a0 leftEarSensitivity:(id)a1 rightEarSensitivity:(id)a2;
- (BOOL)isEqualToSensitivityPoint:(id)a0;

@end
