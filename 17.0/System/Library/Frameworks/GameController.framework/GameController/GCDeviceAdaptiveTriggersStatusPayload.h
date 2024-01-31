@class NSNumber;

@interface GCDeviceAdaptiveTriggersStatusPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *status;
@property (readonly, nonatomic) NSNumber *armPosition;
@property (readonly, nonatomic) NSNumber *mode;

- (unsigned long long)hash;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initFeedbackWithStatus:(unsigned char)a0 armPosition:(unsigned char)a1 mode:(unsigned char)a2;

@end
