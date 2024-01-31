@class NSString, NSDictionary, NSMutableDictionary, SSXPCConnection, NSObject, NSArray;
@protocol OS_dispatch_queue;

@interface SSEntity : NSObject <SSXPCCoding> {
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_localExternalValues;
    NSMutableDictionary *_localValues;
    long long _pid;
    NSArray *_dirtyLocalExternalProperties;
    NSArray *_dirtyLocalProperties;
}

@property (readonly) long long _persistentIdentifier;
@property (copy, getter=_localExternalValues, setter=_setLocalExternalValues:) NSDictionary *_localExternalValues;
@property (copy, getter=_localValues, setter=_setLocalValues:) NSDictionary *_localValues;
@property (readonly, getter=_isManaged) BOOL _managed;
@property (readonly) BOOL exists;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_existsMessage;
+ (long long)_getExternalValuesMessage;
+ (long long)_getValueMessage;
+ (long long)_setExternalValuesMessage;
+ (long long)_setValuesMessage;

- (id)init;
- (void)dealloc;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (id)valueForProperty:(id)a0;
- (id)copyXPCEncoding;
- (BOOL)isEqual:(id)a0;
- (BOOL)setExternalValuesWithDictionary:(id)a0;
- (BOOL)setValuesWithDictionary:(id)a0;
- (id)valueForExternalProperty:(id)a0;
- (void)getValues:(id *)a0 forProperties:(const id *)a1 count:(unsigned long long)a2;
- (void)resetCachedExternalProperties:(const id *)a0 count:(unsigned long long)a1;
- (void)__addCachedExternalValues:(id)a0;
- (void)__addCachedPropertyValues:(id)a0;
- (void)_addCachedExternalValues:(id)a0;
- (void)_addCachedPropertyValues:(id)a0;
- (void)_becomeManagedOnConnection:(id)a0;
- (void)_getValues:(id *)a0 forProperties:(const id *)a1 count:(unsigned long long)a2 message:(long long)a3;
- (id)_initWithPersistentIdentifier:(long long)a0;
- (void)_resetLocalIVars;
- (void)_setDirtyCachedExternalProperties:(id)a0;
- (void)_setDirtyCachedProperties:(id)a0;
- (void)getValues:(id *)a0 forExternalProperties:(const id *)a1 count:(unsigned long long)a2;
- (void)resetCachedProperties:(const id *)a0 count:(unsigned long long)a1;

@end
