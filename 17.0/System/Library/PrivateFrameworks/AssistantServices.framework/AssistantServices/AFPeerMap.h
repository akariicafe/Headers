@class NSMutableDictionary;

@interface AFPeerMap : NSObject {
    NSMutableDictionary *_objectsByUUID;
    NSMutableDictionary *_uuidsByAssistantIdentifier;
    NSMutableDictionary *_uuidsByRapportIdentifier;
    NSMutableDictionary *_uuidsByIdsDeviceIdentifier;
    NSMutableDictionary *_uuidsByHomeKitIdentifier;
}

- (id)init;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_cleanUpUUIDMapsForPeerInfo:(id)a0;
- (id)_getUUIDAndUpdateIDMapsForPeerInfo:(id)a0;
- (id)objectForPeerInfo:(id)a0;
- (void)removeObjectForPeerInfo:(id)a0;
- (void)setObject:(id)a0 forPeerInfo:(id)a1;

@end
