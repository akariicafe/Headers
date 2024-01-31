@class NSArray, CVAIMUCalibration;

@interface CVACalibration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *cameraCalibrations;
@property (retain, nonatomic) CVAIMUCalibration *imuCalibration;

+ (id)classes;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
