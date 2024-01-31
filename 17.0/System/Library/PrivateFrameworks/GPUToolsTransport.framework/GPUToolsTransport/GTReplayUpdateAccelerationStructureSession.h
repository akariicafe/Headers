@class NSData;

@interface GTReplayUpdateAccelerationStructureSession : GTReplayRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long sessionsID;
@property (retain, nonatomic) NSData *data;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
