@class HAP2AccessoryServerAccessoryCache, NSString, HAP2PropertyLock, HAP2SerializedOperationQueue;
@protocol HAP2AccessoryServerPrivate, HAP2AccessoryServerSecureTransport, HAP2AccessoryServerAccessoryFactory, HAP2AccessoryServerEncoding;

@interface HAP2AccessoryServerController : HAP2LoggingObject <HAP2AccessoryServerSecureTransportDelegate, HAP2AccessoryServerControllerPrivate, HAP2AccessoryServerController> {
    BOOL _readingAttributeDatabase;
    BOOL _flagNotificationEnableConsistencyWarning;
    BOOL _attemptedReReadAttributeDatabase;
    unsigned long long _sessionStartTime;
    unsigned long long _sessionNumber;
    unsigned long long _currentAccessoryIPTryCount;
    HAP2AccessoryServerAccessoryCache *_accessoryCache;
    HAP2PropertyLock *_propertyLock;
    HAP2SerializedOperationQueue *_operationQueue;
    id<HAP2AccessoryServerAccessoryFactory> _accessoryFactory;
}

@property (class, readonly, nonatomic) NSString *controllerIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HAP2AccessoryServerPrivate> accessoryServer;
@property (readonly, nonatomic) id<HAP2AccessoryServerEncoding> encoding;
@property (readonly, nonatomic) id<HAP2AccessoryServerSecureTransport> transport;

+ (id)new;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)closeSession;
- (id)unpairedIdentifyWithCompletion:(id /* block */)a0;
- (id)addPairing:(id)a0 completion:(id /* block */)a1;
- (id)disableNotificationsForCharacteristics:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)enableNotificationsForCharacteristics:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)handleUpdatedMetadataWithOldMetadata:(id)a0;
- (id)initWithEncoding:(id)a0 secureTransport:(id)a1 operationQueue:(id)a2;
- (id)initWithEncoding:(id)a0 secureTransport:(id)a1 operationQueue:(id)a2 accessoryFactory:(id)a3;
- (id)listPairingsWithCompletion:(id /* block */)a0;
- (BOOL)mergeWithNewController:(id)a0;
- (id)readAttributeDatabaseWithCompletion:(id /* block */)a0;
- (id)readValuesForCharacteristics:(id)a0 timeout:(double)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)removePairing:(id)a0 cleanupLocalData:(BOOL)a1 completion:(id /* block */)a2;
- (void)secureTransport:(id)a0 didChangeState:(unsigned long long)a1 error:(id)a2;
- (void)secureTransport:(id)a0 didReceiveEvent:(id)a1;
- (void)secureTransport:(id)a0 needsLocalPairingIdentityWithCompletion:(id /* block */)a1;
- (void)secureTransport:(id)a0 needsRemotePairingIdentityForDeviceID:(id)a1 completion:(id /* block */)a2;
- (void)updateMaxRequestTimeout:(double)a0;
- (id)writeValuesForCharacteristics:(id)a0 timeout:(double)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;

@end
