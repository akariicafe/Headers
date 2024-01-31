@class CVACLMotionTypeVector3, CVACLMotionTypeDoubleVector4;

@interface CVACMMotionData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CVACLMotionTypeDoubleVector4 *quaternion;
@property (retain, nonatomic) CVACLMotionTypeVector3 *acceleration;
@property (retain, nonatomic) CVACLMotionTypeVector3 *rotationRate;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long syncTimestamp;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic) unsigned long long frameId;

+ (id)classes;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
