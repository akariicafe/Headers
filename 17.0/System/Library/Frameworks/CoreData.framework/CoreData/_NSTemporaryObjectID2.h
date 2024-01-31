@class _NS128bitWrapper;

@interface _NSTemporaryObjectID2 : NSTemporaryObjectID {
    id _store;
    _NS128bitWrapper *_uuid128;
}

+ (id)initWithEntity:(id)a0 andUUIDString:(id)a1;

- (BOOL)_isPersistentStoreAlive;
- (unsigned long long)hash;
- (id)persistentStore;
- (void)dealloc;
- (id)_storeIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)_referenceData;
- (void)_setPersistentStore:(id)a0;

@end
