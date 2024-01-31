@class GDSwiftViewService;

@interface GDViewService : NSObject {
    GDSwiftViewService *_swiftViewService;
}

+ (id)defaultService;
+ (id)clientService;

- (void).cxx_destruct;
- (id)autonamingViewWithViewName:(id)a0 error:(id *)a1;
- (id)donationViewWithError:(id *)a0;
- (id)featureViewWithError:(id *)a0;
- (id)firstPartyLongTermTopicViewWithError:(id *)a0;
- (id)firstPartyShortTermTopicViewWithError:(id *)a0;
- (id)initWithSwiftViewService:(id)a0;
- (id)pageRankViewWithError:(id *)a0;
- (id)personViewWithError:(id *)a0;
- (id)subgraphViewContextWithViewName:(id)a0 tableName:(id)a1 error:(id *)a2;
- (id)visualIdentifierViewWithError:(id *)a0;

@end
