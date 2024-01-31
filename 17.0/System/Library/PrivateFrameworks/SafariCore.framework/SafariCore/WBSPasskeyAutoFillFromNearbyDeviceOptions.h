@class NSUUID, NSXPCListenerEndpoint;

@interface WBSPasskeyAutoFillFromNearbyDeviceOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *operationUUID;
@property (readonly, copy, nonatomic) NSXPCListenerEndpoint *agentEndpoint;

- (void)encodeWithCoder:(id)a0;
- (id)initWithOperationUUID:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
