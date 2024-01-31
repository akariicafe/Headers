@class NSString, NSObject;
@protocol OS_xpc_object;

@interface DAAppContext : NSObject <CUXPCCodable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcEndpoint;
@property (copy, nonatomic) NSString *bundleIdentifier;

- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
