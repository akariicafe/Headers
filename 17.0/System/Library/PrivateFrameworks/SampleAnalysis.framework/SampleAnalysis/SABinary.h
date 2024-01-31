@class NSString, NSUUID, NSArray, SACSSymbolOwnerWrapper, SASegment, NSMutableArray;

@interface SABinary : NSObject <SAJSONSerialization, SASerializable, NSCopying> {
    SACSSymbolOwnerWrapper *_symbolOwnerWrapper;
    unsigned long long _alreadyAttempted;
    NSString *_name;
    unsigned long long _optionsWhenLastSymbolicated;
    unsigned long long _length;
    SASegment *_fakeEntireBinarySegment;
    NSMutableArray *_segments;
    unsigned char _attemptedToGetBundleInfo : 1;
    unsigned char _attemptedToGetCodeSignInfo : 1;
    unsigned char _hadSymbolOwnerWhenLastSymbolicated : 1;
    unsigned char _symbolOwnerWasDsymWhenLastSymbolicated : 1;
    BOOL _haveMoreInstructionsToSymbolicate;
    BOOL _foundPathViaBinaryLocator;
    NSString *_path;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSString *_bundleShortVersion;
    NSString *_binaryVersion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSUUID *uuid;
@property (readonly) unsigned long long length;
@property (readonly) NSString *name;
@property (readonly) NSString *path;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *bundleVersion;
@property (readonly) NSString *bundleShortVersion;
@property (readonly) NSString *binaryVersion;
@property (readonly) NSString *codesigningID;
@property (readonly) NSString *teamID;
@property (readonly) NSArray *segments;
@property (readonly) unsigned long long textSegmentLength;
@property (readonly) BOOL hasTextExecSegment;

+ (void)clearCaches;
+ (void)clearCoreSymbolicationCaches;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;
+ (void)enableImmediateCleanupOfCSSymbolOwners;
+ (void)addPath:(id)a0 forBinaryWithUUID:(id)a1;
+ (void)clearSymbolCaches;
+ (id)binaryWithUUID:(id)a0 absolutePath:(id)a1;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
+ (void)addSymbolsFromTailspin:(id)a0;
+ (id)binaryWithUUID:(id)a0;
+ (id)classDictionaryKey;
+ (void)addDsymPaths:(id)a0;

- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (void)addSelfToSerializationDictionary:(id)a0;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned char x2[16]; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; union { unsigned char x0; struct { unsigned char x0 : 1; } x1; } x10; unsigned short x11; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (id)instructionAtOffsetIntoBinary:(long long)a0;
- (id)instructionAtOffsetIntoTextSegment:(unsigned long long)a0;
- (void)symbolicateAllInstructionsWithOptions:(unsigned long long)a0 pid:(int)a1;
- (void).cxx_destruct;
- (void)gatherInfoWithDataGatheringOptions:(unsigned long long)a0 pid:(int)a1;
- (id)initWithUUID:(id)a0 path:(id)a1;
- (void)clearSymbolCache;
- (id)segmentWithName:(id)a0;
- (void)writeJSONDictionaryEntriesToStream:(id)a0;
- (void)clearCoreSymbolicationCache;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)cacheSymbolOwnerWithOptions:(unsigned long long)a0 pid:(int)a1;
- (void)addPath:(id)a0;

@end
