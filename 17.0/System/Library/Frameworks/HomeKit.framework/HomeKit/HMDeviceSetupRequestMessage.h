@class NSData;

@interface HMDeviceSetupRequestMessage : TRRequestMessage

@property (readonly, copy, nonatomic) NSData *payload;
@property (nonatomic) long long qualityOfService;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPayload:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
