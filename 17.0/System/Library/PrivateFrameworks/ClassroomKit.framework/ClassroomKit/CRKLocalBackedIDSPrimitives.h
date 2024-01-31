@class CATOperationQueue, NSDictionary, NSObject;
@protocol CRKIDSReadinessEvaluating, CRKIDSLocalPrimitives;

@interface CRKLocalBackedIDSPrimitives : NSObject <CRKIDSPrimitives>

@property (readonly, nonatomic) NSObject<CRKIDSLocalPrimitives> *IDSLocalPrimitives;
@property (readonly, nonatomic) id<CRKIDSReadinessEvaluating> IDSReadinessEvaluator;
@property (readonly, nonatomic) CATOperationQueue *operationQueue;
@property (readonly, copy, nonatomic) NSDictionary *debugInfo;

- (void).cxx_destruct;
- (void)addAllowedAppleIDsToFirewall:(id)a0 completion:(id /* block */)a1;
- (void)fetchFirewallAllowedAppleIDs:(id /* block */)a0;
- (id)initWithIDSLocalPrimitives:(id)a0 IDSReadinessEvaluator:(id)a1;
- (id)initWithIDSLocalPrimitives:(id)a0 IDSReadinessEvaluator:(id)a1 operationQueue:(id)a2;
- (id)operationDebugInfo;
- (void)removeAllowedAppleIDsFromFirewall:(id)a0 completion:(id /* block */)a1;
- (void)sendMessage:(id)a0 destinationAddress:(id)a1 sourceAppleID:(id)a2 completion:(id /* block */)a3;
- (void)sendMessage:(id)a0 destinationAddress:(id)a1 sourceAppleID:(id)a2 options:(id)a3 completion:(id /* block */)a4;
- (void)subscribeToMessagesWithHandler:(id /* block */)a0 completion:(id /* block */)a1;

@end
