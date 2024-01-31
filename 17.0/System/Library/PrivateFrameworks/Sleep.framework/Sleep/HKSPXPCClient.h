@class NAFuture, NSXPCConnection, NSString, HKSPXPCClientIdentifier;
@protocol HKSPClient;

@interface HKSPXPCClient : NSObject <BSDescriptionProviding>

@property (copy) HKSPXPCClientIdentifier *clientIdentifier;
@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) id<HKSPClient> clientLink;
@property (readonly, nonatomic) int processID;
@property (readonly, nonatomic) NAFuture *clientIdentifierProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientForConnection:(id)a0 clientLink:(id)a1;
+ (id)clientForConnection:(id)a0 clientIdentifierProvider:(id)a1 clientLink:(id)a2;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)initWithConnection:(id)a0 clientIdentifierProvider:(id)a1 clientLink:(id)a2;

@end
