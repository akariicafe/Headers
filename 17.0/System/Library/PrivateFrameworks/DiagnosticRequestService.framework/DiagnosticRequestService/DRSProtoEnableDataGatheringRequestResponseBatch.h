@class NSString, NSMutableArray;

@interface DRSProtoEnableDataGatheringRequestResponseBatch : PBCodable <CKCodeOperationMessageMutation, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *decisionResults;

+ (Class)decisionResultsType;

- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addDecisionResults:(id)a0;
- (void)clearDecisionResults;
- (id)decisionResultsAtIndex:(unsigned long long)a0;
- (unsigned long long)decisionResultsCount;

@end
