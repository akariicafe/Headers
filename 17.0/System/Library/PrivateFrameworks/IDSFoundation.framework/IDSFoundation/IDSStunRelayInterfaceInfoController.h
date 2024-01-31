@class NSMutableDictionary;

@interface IDSStunRelayInterfaceInfoController : NSObject {
    NSMutableDictionary *_tokenToRelayInterfaceInfoDeliveryStatus;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)candidatePairsFromRelayInterfaceInfo:(char *)a0 bufferLength:(int)a1 token:(id)a2 sessionID:(id)a3 error:(int *)a4;
- (id)createRelayInterfaceInfoFromCandidatePairs:(id)a0 token:(id)a1;
- (unsigned long long)relayInterfaceInfoDeliveryStatus:(id)a0;
- (void)removeCache:(id)a0;
- (void)setRelayInterfaceInfoDeliveryStatus:(id)a0 status:(unsigned long long)a1;

@end
