@class NSString;

@interface DYGTMTLCommandQueueInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long streamRef;
@property (nonatomic) unsigned long long deviceAddress;
@property (nonatomic) unsigned long long deviceStreamRef;
@property (nonatomic) unsigned long long toolsDeviceAddress;
@property (nonatomic) unsigned long long queueAddress;
@property (nonatomic) unsigned long long toolsQueueAddress;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL canBeCaptured;
@property (nonatomic) BOOL isOpenGLQueue;
@property (nonatomic) BOOL isInternalQueue;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
