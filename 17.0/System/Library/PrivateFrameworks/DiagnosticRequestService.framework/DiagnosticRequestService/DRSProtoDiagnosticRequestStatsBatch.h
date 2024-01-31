@class NSString, DRSProtoClientDeviceMetadata, NSMutableArray;

@interface DRSProtoDiagnosticRequestStatsBatch : PBCodable <CKCodeOperationMessageMutation, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (retain, nonatomic) DRSProtoClientDeviceMetadata *clientMetadata;
@property (retain, nonatomic) NSMutableArray *requestsResultsStats;

+ (Class)requestsResultsStatsType;

- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addRequestsResultsStats:(id)a0;
- (void)clearRequestsResultsStats;
- (id)requestsResultsStatsAtIndex:(unsigned long long)a0;
- (unsigned long long)requestsResultsStatsCount;

@end
