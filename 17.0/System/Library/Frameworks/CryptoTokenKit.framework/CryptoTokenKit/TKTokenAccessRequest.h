@class TKTokenID, NSString, NSUUID, NSXPCConnection;

@interface TKTokenAccessRequest : NSObject

@property (readonly, nonatomic) NSString *clientBundleID;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) BOOL clientHasAccessTokenEntitlement;
@property (readonly, nonatomic) TKTokenID *tokenID;
@property (readonly, nonatomic) NSString *providerBundleID;
@property (readonly, nonatomic) NSString *providerName;
@property (readonly, nonatomic) NSUUID *correlationID;
@property (readonly, nonatomic) NSXPCConnection *clientConnection;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCaller:(id)a0 tokenID:(id)a1 extension:(id)a2;
- (id)initWithClientBundleID:(id)a0 clientName:(id)a1 clientConnection:(id)a2 clientHasAccessTokenEntitlement:(BOOL)a3 tokenID:(id)a4 providerBundleID:(id)a5 providerName:(id)a6 correlationID:(id)a7;

@end
