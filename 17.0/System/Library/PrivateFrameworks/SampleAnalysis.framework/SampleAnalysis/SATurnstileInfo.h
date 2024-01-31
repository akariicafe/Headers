@class NSString;

@interface SATurnstileInfo : SABlockingInfo <SASerializable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long context;
@property (readonly) unsigned char priority;
@property (readonly) unsigned char numHops;
@property (readonly) unsigned long long flags;

+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;
+ (id)classDictionaryKey;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (void)addSelfToSerializationDictionary:(id)a0;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned char x3; unsigned char x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (id)init;
- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)blockingPid;
- (unsigned long long)blockingTid;
- (id)descriptionForPid:(int)a0 tid:(unsigned long long)a1 threadPriority:(int)a2 options:(unsigned long long)a3 nameCallback:(id /* block */)a4;
- (id)initWithKCDataTurnstileInfo:(const struct stackshot_thread_turnstileinfo_v2 { unsigned long long x0; unsigned long long x1; unsigned char x2; unsigned char x3; unsigned long long x4; short x5; } *)a0;

@end
