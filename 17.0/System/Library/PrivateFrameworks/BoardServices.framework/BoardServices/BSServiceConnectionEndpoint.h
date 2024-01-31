@class NSString, NSUUID, NSObject;
@protocol OS_xpc_object;

@interface BSServiceConnectionEndpoint : NSObject <NSCopying, BSXPCCoding, BSXPCSecureCoding, NSSecureCoding> {
    NSString *_targetDescription;
    int _targetPID;
    NSObject<OS_xpc_object> *_endpoint;
    NSUUID *_oneshot;
}

@property (class, readonly, copy, nonatomic) NSString *defaultShellMachName;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isNonLaunching) BOOL nonLaunching;
@property (readonly, copy, nonatomic) NSString *targetDescription;
@property (readonly, copy, nonatomic) NSString *service;
@property (readonly, copy, nonatomic) NSString *instance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)endpointForSystemMachName:(id)a0 service:(id)a1 instance:(id)a2;
+ (id)endpointForMachName:(id)a0 service:(id)a1 instance:(id)a2;
+ (id)nullEndpointForService:(id)a0 instance:(id)a1;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)endpointForServiceName:(id)a0 oneshot:(id)a1 service:(id)a2 instance:(id)a3;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)init;
- (void)saveAsInjectorEndowmentForKey:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (BOOL)isNullEndpoint;
- (long long)compare:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqualToServiceEndpoint:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
