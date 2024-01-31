@class NSString, MCMUserIdentityCache, MCMPOSIXUser, NSObject;
@protocol OS_xpc_object;

@interface MCMClientMessageContext : NSObject <MCMClientMessageContext> {
    struct { unsigned int val[8]; } _auditToken;
}

@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly, nonatomic) MCMPOSIXUser *posixUser;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *message;
@property (readonly, nonatomic, getter=isExtension) BOOL extension;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initForCurrentThreadContextWithXPCMessage:(id)a0 userIdentityCache:(id)a1;

@end
