@class NSData, NSMutableArray, WOHealthBridgeSyncIdentity;

@interface WOHealthBridgeProtoPersistence : PBCodable <NSCopying>

@property (nonatomic) int version;
@property (nonatomic) int type;
@property (retain, nonatomic) NSData *uuid;
@property (retain, nonatomic) NSMutableArray *keyedNumbers;
@property (retain, nonatomic) NSMutableArray *keyedStrings;
@property (retain, nonatomic) NSMutableArray *keyedDates;
@property (retain, nonatomic) NSMutableArray *keyedDatas;
@property (retain, nonatomic) NSData *persistedData;
@property (readonly, nonatomic) BOOL hasPersistedProtoData;
@property (retain, nonatomic) NSData *persistedProtoData;
@property (nonatomic) int objectState;
@property (nonatomic) double objectModificationTimeSinceReferenceDate;
@property (readonly, nonatomic) BOOL hasSyncIdentity;
@property (retain, nonatomic) WOHealthBridgeSyncIdentity *syncIdentity;

+ (Class)keyedDatasType;
+ (Class)keyedDatesType;
+ (Class)keyedNumbersType;
+ (Class)keyedStringsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearKeyedDatas;
- (unsigned long long)keyedDatasCount;
- (void)clearKeyedDates;
- (unsigned long long)keyedDatesCount;
- (void)addKeyedDatas:(id)a0;
- (void)addKeyedDates:(id)a0;
- (void)addKeyedNumbers:(id)a0;
- (void)addKeyedStrings:(id)a0;
- (void)clearKeyedNumbers;
- (void)clearKeyedStrings;
- (id)keyedDatasAtIndex:(unsigned long long)a0;
- (id)keyedDatesAtIndex:(unsigned long long)a0;
- (id)keyedNumbersAtIndex:(unsigned long long)a0;
- (unsigned long long)keyedNumbersCount;
- (id)keyedStringsAtIndex:(unsigned long long)a0;
- (unsigned long long)keyedStringsCount;

@end
