@class NSMutableArray;

@interface HKCodableActivitySummaryCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *activitySummaryEntrys;

+ (Class)activitySummaryEntryType;

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
- (unsigned long long)activitySummaryEntrysCount;
- (id)activitySummaryEntryAtIndex:(unsigned long long)a0;
- (void)addActivitySummaryEntry:(id)a0;
- (void)clearActivitySummaryEntrys;

@end
