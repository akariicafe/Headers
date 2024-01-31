@class CVACLMotionTypeDoubleVector3, NSArray, NSNumber, CVACLMotionTypeVector4;

@interface CVACMALSData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int luxValue;
@property (retain, nonatomic) CVACLMotionTypeVector4 *rawChannels;
@property (retain, nonatomic) CVACLMotionTypeDoubleVector3 *colorComponents;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long syncTimestamp;
@property (retain, nonatomic) NSNumber *gain;
@property (retain, nonatomic) NSNumber *integrationTime;
@property (nonatomic) unsigned long long frameId;
@property (nonatomic) unsigned int vendorNumChannels;
@property (retain, nonatomic) NSArray *vendorRawChannels;
@property (nonatomic) unsigned int vendorStatus;
@property (nonatomic) unsigned char vendorOrientation;
@property (nonatomic) unsigned int vendorIntegrationTime;
@property (nonatomic) unsigned int vendorReportInterval;
@property (nonatomic) float vendorLux;
@property (nonatomic) float vendorTemperature;
@property (nonatomic) float vendorCCT;
@property (retain, nonatomic) NSArray *vendorAZOffsets;

+ (id)classes;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
