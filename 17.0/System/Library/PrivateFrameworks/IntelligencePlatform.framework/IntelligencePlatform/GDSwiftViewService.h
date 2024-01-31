@interface GDSwiftViewService : NSObject {
    void /* unknown type, empty encoding */ databaseCache;
    void /* unknown type, empty encoding */ accessRequester;
}

@property (class, nonatomic, readonly) GDSwiftViewService *clientService;

- (id)autonamingViewWithViewName:(id)a0 error:(id *)a1;
- (id)donationViewAndReturnError:(id *)a0;
- (id)firstPartyLongTermTopicViewAndReturnError:(id *)a0;
- (id)firstPartyShortTermTopicViewAndReturnError:(id *)a0;
- (id)gdFeatureViewAndReturnError:(id *)a0;
- (id)gdSwiftSubgraphViewContextWithName:(id)a0 tableName:(id)a1 error:(id *)a2;
- (id)pageRankViewAndReturnError:(id *)a0;
- (id)personViewAndReturnError:(id *)a0;
- (id)visualIdentifierViewAndReturnError:(id *)a0;
- (id)init;
- (void).cxx_destruct;

@end
