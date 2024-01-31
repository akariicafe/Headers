@class NSString;
@protocol SBKKeyValuePayloadPair;

@interface SBKPushValueTransaction : SBKTransaction {
    BOOL _isRechedulable;
}

@property (readonly, nonatomic) id<SBKKeyValuePayloadPair> clientItemPayloadPair;
@property (readonly, nonatomic) NSString *clientItemVersionAnchor;
@property (readonly, nonatomic) id<SBKKeyValuePayloadPair> requestItemPayloadPair;
@property (readonly, nonatomic) NSString *requestItemVersionAnchor;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) id<SBKKeyValuePayloadPair> resultItemPayloadPair;
@property (readonly, nonatomic) NSString *resultItemVersionAnchor;
@property (readonly, nonatomic) NSString *resultDomainVersion;

- (id)description;
- (void).cxx_destruct;
- (id)newRequest;
- (id)_resolveConflictBetweenClientPayloadPair:(id)a0 andServerPayloadPair:(id)a1;
- (id)clampsKey;
- (id)initWithStoreBagContext:(id)a0 clientItemPayloadPair:(id)a1 clientItemVersionAnchor:(id)a2;
- (void)processDataInResponse:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
