@class NSUUID, NSData;

@interface NEProcessIdentity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) int pidVersion;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSData *auditTokenData;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initFromXPCConnection:(id)a0;
- (id)initFromXPCMessage:(id)a0;

@end
