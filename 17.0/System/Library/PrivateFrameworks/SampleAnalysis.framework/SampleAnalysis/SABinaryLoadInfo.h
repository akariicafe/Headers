@class NSString, SASegment, SABinary;

@interface SABinaryLoadInfo : NSObject <SAJSONSerialization, SASerializable> {
    unsigned long long _loadAddress;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) SABinary *binary;
@property (readonly) SASegment *segment;
@property (readonly) unsigned long long loadAddress;
@property (readonly) unsigned long long length;
@property (readonly) BOOL isInKernelAddressSpace;
@property (readonly) unsigned long long textSegmentLoadAddress;

+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;
+ (id)classDictionaryKey;
+ (id)binaryLoadInfoForAddress:(unsigned long long)a0 inBinaryLoadInfos:(id)a1;
+ (id)binaryLoadInfoForAddress:(unsigned long long)a0 inBinaryLoadInfos:(id)a1 libraryCache:(id)a2;
+ (id)binaryLoadInfoForLiveProcessWithPid:(int)a0;
+ (id)binaryLoadInfoForLiveProcessWithPid:(int)a0 dataGatheringOptions:(unsigned long long)a1;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (void)addSelfToSerializationDictionary:(id)a0;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; union { unsigned char x0; struct { unsigned char x0 : 1; } x1; } x4; unsigned long long x5; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void).cxx_destruct;
- (void)writeJSONDictionaryEntriesToStream:(id)a0;
- (id)initWithBinary:(id)a0 segment:(id)a1 loadAddress:(unsigned long long)a2;
- (id)instructionAtOffsetIntoLoadInfo:(unsigned long long)a0;

@end
