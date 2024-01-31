@class NSString, KCPairingChannel;
@protocol CDPDCircleProxy;

@interface CDPTTSUPayloadProvider : NSObject <CDPKeychainCircleProxy> {
    KCPairingChannel *_pairingChannel;
    BOOL _complete;
    id<CDPDCircleProxy> _circleProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isComplete;
- (void).cxx_destruct;
- (id)initWithCircleProxy:(id)a0;
- (id)initiatingPayload:(id *)a0;
- (id)processIncomingPayload:(id)a0 error:(id *)a1;
- (BOOL)requiresInitialSync;
- (BOOL)supportsInteractiveAuth;

@end
