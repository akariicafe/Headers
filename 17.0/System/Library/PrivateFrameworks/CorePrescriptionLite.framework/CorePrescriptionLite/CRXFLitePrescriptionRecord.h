@class NSString, NSData, NSDate, CRXFLiteRXValues;

@interface CRXFLitePrescriptionRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *accPayload;
@property (readonly, nonatomic) NSString *enrollmentName;
@property (readonly, nonatomic) NSDate *enrollmentDate;
@property (readonly, nonatomic) NSString *leftCalibrationData;
@property (readonly, nonatomic) NSString *rightCalibrationData;
@property (readonly, nonatomic) CRXFLiteRXValues *leftEyeRX;
@property (readonly, nonatomic) CRXFLiteRXValues *rightEyeRX;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithACCPayload:(id)a0 enrollmentName:(id)a1 enrollmentDate:(id)a2 leftCalibrationData:(id)a3 rightCalibrationData:(id)a4 leftEyeRX:(id)a5 rightEyeRX:(id)a6;

@end
