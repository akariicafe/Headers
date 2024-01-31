@class _PFModelMap;

@interface _PFContextMapTable : NSObject {
    unsigned long long _slotLimit;
    struct __CFDictionary { } *_objectsByTemporaryID;
    struct __CFDictionary **_objectsByPermanentObjectID;
    struct __CFDictionary **_objectsBy64bitPKID;
    unsigned long long *_capacitiesFor64bitPKMappings;
    struct _contextMapTableFlags { unsigned char _usesWeakReferences : 1; unsigned char _garbageCollectionEnabled : 1; unsigned int _reservedFlags : 30; } _flags;
    _PFModelMap *_modelMap;
}

- (void)dealloc;

@end
