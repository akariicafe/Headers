@class NSString, NSMutableDictionary, TKTokenConnection;

@interface TKTokenSessionConnection : NSObject <TKClientTokenProtocol> {
    long long _sessionIDCounter;
}

@property (readonly, nonatomic) TKTokenConnection *tokenConnection;
@property (readonly, nonatomic) NSMutableDictionary *sessions;
@property (readonly, nonatomic) NSMutableDictionary *initialKeepAlives;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)endSession:(id)a0 reply:(id /* block */)a1;
- (id)initWithTokenConnection:(id)a0;
- (void)session:(id)a0 createObjectWithAttributes:(id)a1 reply:(id /* block */)a2;
- (void)session:(id)a0 deleteObjectWithObjectID:(id)a1 reply:(id /* block */)a2;
- (void)session:(id)a0 evaluateAccessControl:(id)a1 forOperation:(id)a2 reply:(id /* block */)a3;
- (void)session:(id)a0 getAdvertisedItemsWithReply:(id /* block */)a1;
- (void)session:(id)a0 getAttributesOfObjectID:(id)a1 reply:(id /* block */)a2;
- (void)session:(id)a0 objectID:(id)a1 operation:(long long)a2 data:(id)a3 algorithms:(id)a4 parameters:(id)a5 reply:(id /* block */)a6;
- (void)startSessionWithLAContext:(id)a0 parameters:(id)a1 reply:(id /* block */)a2;
- (void)withSessionID:(id)a0 invoke:(id /* block */)a1;

@end
