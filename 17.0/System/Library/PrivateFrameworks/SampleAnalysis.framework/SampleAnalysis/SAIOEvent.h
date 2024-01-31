@class NSString, SATimestamp;

@interface SAIOEvent : NSObject <SASerializable> {
    unsigned int _rawType;
    unsigned long long _blockNumber;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) SATimestamp *startTimestamp;
@property (readonly) SATimestamp *endTimestamp;
@property (readonly) unsigned long long size;
@property (readonly) NSString *type;
@property (readonly) unsigned int tier;
@property (readonly) BOOL isRead;
@property (readonly) unsigned long long threadID;

+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;
+ (id)typeString:(unsigned int)a0;
+ (id)classDictionaryKey;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (void)setEndTimestamp:(id)a0;
- (void)addSelfToSerializationDictionary:(id)a0;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned int x7; unsigned int x8; unsigned long long x9; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void).cxx_destruct;
- (id)initWithStartTime:(id)a0 threadID:(unsigned long long)a1 blockNumber:(unsigned long long)a2 size:(unsigned long long)a3 type:(unsigned long long)a4 tier:(unsigned int)a5;
- (void)writeJSONDictionaryEntriesToStream:(id)a0;

@end
