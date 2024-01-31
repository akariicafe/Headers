@class NSString, NSMutableSet, NWNumericAccumulator;

@interface ConnectionFailureHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol> {
    id _relayReadyObserver;
    NWNumericAccumulator *_stallAccumulator;
    NSMutableSet *_privacyProxiesUsed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (id)init;
- (BOOL)noteSymptom:(id)a0;
- (int)configureInstance:(id)a0;
- (void)completeInitialization;
- (void).cxx_destruct;
- (BOOL)updateKextState;
- (void)handleFailureOrStallSymptom:(id)a0;
- (void)postConnectionFailureMetrics:(unsigned char)a0;
- (void)setUpNumericAccumulator;

@end
