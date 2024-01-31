@class FPSpotlightIndexer, NSString, CSSearchableIndex, NSURL;

@interface FPSpotlightFetchClientStateOperation : FPOperation {
    FPSpotlightIndexer *_indexer;
    CSSearchableIndex *_index;
    NSString *_indexName;
    NSString *_spotlightDomainIdentifier;
    NSString *_reason;
    NSURL *_supportURL;
}

+ (id)_currentIndexerVersion;

- (void)main;
- (id)_clientStateCurrentVersionIfNeedReset;
- (id)initWithIndexer:(id)a0 index:(id)a1 indexName:(id)a2 spotlightDomainIdentifier:(id)a3 reason:(id)a4 supportURL:(id)a5;
- (id)operationDescription;
- (void)_fetchClientState;
- (void).cxx_destruct;
- (void)_markClientStateResetDone;
- (void)_handleFetchedClientState:(id)a0 error:(id)a1;

@end
