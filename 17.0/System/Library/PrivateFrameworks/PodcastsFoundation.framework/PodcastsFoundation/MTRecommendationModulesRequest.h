@interface MTRecommendationModulesRequest : MTBaseMAPIRequest <MTMAPIRequest> {
    void /* unknown type, empty encoding */ moduleIDs;
    void /* unknown type, empty encoding */ kPayloadDataFetchLimit;
    void /* unknown type, empty encoding */ context;
}

- (id)init;
- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithModuleIDs:(id)a0;

@end
