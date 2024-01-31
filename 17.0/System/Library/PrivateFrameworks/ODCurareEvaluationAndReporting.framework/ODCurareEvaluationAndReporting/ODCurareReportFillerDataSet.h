@class ODCurareReportFillerDataSetSize, NSMutableArray, NSString;

@interface ODCurareReportFillerDataSet : PBCodable <NSCopying>

@property (retain, nonatomic) ODCurareReportFillerDataSetSize *size;
@property (retain, nonatomic) NSMutableArray *stats;
@property (readonly, nonatomic) BOOL hasSampleStartDate;
@property (retain, nonatomic) NSString *sampleStartDate;
@property (readonly, nonatomic) BOOL hasSampleEndDate;
@property (retain, nonatomic) NSString *sampleEndDate;

+ (Class)statsType;

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
- (void)addStats:(id)a0;
- (void)clearStats;
- (id)statsAtIndex:(unsigned long long)a0;
- (unsigned long long)statsCount;

@end
