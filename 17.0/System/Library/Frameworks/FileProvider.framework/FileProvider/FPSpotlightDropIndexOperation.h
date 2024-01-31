@class NSString, CSSearchableIndex, FPSpotlightIndexer;

@interface FPSpotlightDropIndexOperation : FPOperation {
    FPSpotlightIndexer *_indexer;
    CSSearchableIndex *_index;
    NSString *_reason;
    NSString *_spotlightDomainIdentifier;
}

+ (void)deleteSearchableItemsAndClearClientStateWithDomainIdentifier:(id)a0 index:(id)a1 completionHandler:(id /* block */)a2;

- (void)main;
- (id)operationDescription;
- (void).cxx_destruct;
- (id)initWithIndexer:(id)a0 index:(id)a1 spotlightDomainIdentifier:(id)a2 reason:(id)a3;

@end
