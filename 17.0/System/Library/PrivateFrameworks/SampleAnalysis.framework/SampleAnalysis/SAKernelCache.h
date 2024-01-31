@class NSString, NSArray, NSUUID;

@interface SAKernelCache : NSObject <SAJSONSerialization, SALibraryCache>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSArray *binaryLoadInfos;
@property (readonly) unsigned long long loadAddress;
@property (readonly) NSUUID *uuid;
@property (readonly) unsigned long long startAddress;
@property (readonly) unsigned long long endAddress;
@property (readonly) unsigned long long textSegmentsStartAddress;
@property (readonly) unsigned long long textSegmentsEndAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearCaches;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;
+ (id)kernelCacheWithUUID:(id)a0 loadAddress:(unsigned long long)a1;
+ (id)classDictionaryKey;

@end
