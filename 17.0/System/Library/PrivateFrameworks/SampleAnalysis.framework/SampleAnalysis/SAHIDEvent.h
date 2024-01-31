@class NSString, SATimestamp, NSMutableArray;

@interface SAHIDEvent : NSObject <SASerializable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) SATimestamp *hidEventTimestamp;
@property (readonly) unsigned int hidEventType;
@property (readonly) NSString *hidEventTypeString;
@property (readonly) NSMutableArray *steps;
@property (readonly) double thresholdToGroupSameEventType;

+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;
+ (void)parseKTrace:(struct ktrace_session { } *)a0 findingHIDEvents:(id /* block */)a1;
+ (id)classDictionaryKey;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (void)addSelfToSerializationDictionary:(id)a0;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned short x2; unsigned int x3; unsigned long long x4; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void).cxx_destruct;

@end
