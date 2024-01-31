@class NSString, HDCodableSyncVersionRange, HDCodableSyncStateOrigin, NSMutableArray;

@interface HDCodableSyncState : PBCodable <HDSyncState, NSCopying>

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) struct { int x0; int x1; } versionRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) HDCodableSyncVersionRange *version;
@property (readonly, nonatomic) BOOL hasOrigin;
@property (retain, nonatomic) HDCodableSyncStateOrigin *origin;
@property (retain, nonatomic) NSMutableArray *versionedDatas;

+ (Class)versionedDataType;

- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addVersionedData:(id)a0;
- (void)clearVersionedDatas;
- (BOOL)decodedObjectOfClass:(Class)a0 version:(long long)a1 decodedObject:(id *)a2 error:(id *)a3;
- (void)setCodableObject:(id)a0 version:(long long)a1 profile:(id)a2;
- (void)setVersionRange:(struct { int x0; int x1; })a0;
- (id)versionedDataAtIndex:(unsigned long long)a0;
- (unsigned long long)versionedDatasCount;

@end
