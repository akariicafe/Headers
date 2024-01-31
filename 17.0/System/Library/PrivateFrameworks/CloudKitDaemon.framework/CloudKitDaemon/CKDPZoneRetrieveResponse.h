@class NSData, NSMutableArray;

@interface CKDPZoneRetrieveResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *zoneSummarys;
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (retain, nonatomic) NSData *continuationMarker;
@property (retain, nonatomic) NSMutableArray *anonymousZoneInfos;

+ (Class)zoneSummaryType;
+ (Class)anonymousZoneInfoType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addZoneSummary:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearZoneSummarys;
- (id)description;
- (void)addAnonymousZoneInfo:(id)a0;
- (void)clearAnonymousZoneInfos;
- (unsigned long long)zoneSummarysCount;
- (void).cxx_destruct;
- (unsigned long long)anonymousZoneInfosCount;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)zoneSummaryAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)anonymousZoneInfoAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
