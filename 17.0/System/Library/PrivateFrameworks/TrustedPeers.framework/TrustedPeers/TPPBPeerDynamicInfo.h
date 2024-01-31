@class NSMutableArray;

@interface TPPBPeerDynamicInfo : PBCodable <NSCopying> {
    struct { unsigned char clock : 1; } _has;
}

@property (nonatomic) BOOL hasClock;
@property (nonatomic) unsigned long long clock;
@property (retain, nonatomic) NSMutableArray *includeds;
@property (retain, nonatomic) NSMutableArray *excludeds;
@property (retain, nonatomic) NSMutableArray *dispositions;
@property (retain, nonatomic) NSMutableArray *preapprovals;

+ (Class)dispositionsType;
+ (Class)excludedType;
+ (Class)includedType;
+ (Class)preapprovalsType;

- (unsigned long long)preapprovalsCount;
- (unsigned long long)hash;
- (id)includedAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)addPreapprovals:(id)a0;
- (unsigned long long)excludedsCount;
- (id)dispositionsAtIndex:(unsigned long long)a0;
- (void)addExcluded:(id)a0;
- (void)clearExcludeds;
- (void)writeTo:(id)a0;
- (void)addIncluded:(id)a0;
- (id)description;
- (id)preapprovalsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)addDispositions:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)dispositionsCount;
- (unsigned long long)includedsCount;
- (void)mergeFrom:(id)a0;
- (id)excludedAtIndex:(unsigned long long)a0;
- (void)clearPreapprovals;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearIncludeds;
- (void)clearDispositions;

@end
