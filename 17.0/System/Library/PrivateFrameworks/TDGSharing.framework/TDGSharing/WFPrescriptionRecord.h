@class NSString;

@interface WFPrescriptionRecord : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ accPayload;
    void /* unknown type, empty encoding */ enrollmentName;
    void /* unknown type, empty encoding */ enrollmentDate;
    void /* unknown type, empty encoding */ leftLensFactoryCalibrationData;
    void /* unknown type, empty encoding */ rightLensFactoryCalibrationData;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
