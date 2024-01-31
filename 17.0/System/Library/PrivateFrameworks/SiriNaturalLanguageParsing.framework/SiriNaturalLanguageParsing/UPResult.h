@class UPResultRootNode, NSArray, NSUUID, SIRINLUINTERNALUAAP_PARSERUaaPParserResponse;

@interface UPResult : NSObject

@property (readonly, copy, nonatomic) NSArray *_candidates;
@property (readonly, copy) NSUUID *queryUUID;
@property (readonly, copy) UPResultRootNode *rootNode;
@property (readonly) SIRINLUINTERNALUAAP_PARSERUaaPParserResponse *protobufRepresentation;

+ (id)createResultFromExistingResult:(id)a0 truncatedTo:(unsigned long long)a1;

- (void).cxx_destruct;
- (long long)candidateCount;
- (id)candidateAtRank:(long long)a0;
- (id)initWithCandidates:(id)a0 queryUUID:(id)a1;

@end
