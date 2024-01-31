@class CVACMMotionTypeDeviceMotionData;

@interface CVACMDeviceMotionData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CVACMMotionTypeDeviceMotionData *deviceMotion;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long syncTimestamp;

- (id)init;
- (id)dictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCMDeviceMotion:(id)a0;

@end
