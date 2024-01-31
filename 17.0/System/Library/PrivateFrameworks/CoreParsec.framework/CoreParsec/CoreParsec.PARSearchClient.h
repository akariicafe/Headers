@interface CoreParsec.PARSearchClient : NSObject <PARClientXPC> {
    void /* unknown type, empty encoding */ sessions;
    void /* unknown type, empty encoding */ imageLoader;
    void /* unknown type, empty encoding */ receivingStreamDelegate;
    void /* unknown type, empty encoding */ queue;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ connection;

- (void)bagDidLoad:(id)a0 error:(id)a1;
- (void)didDeleteResource:(id)a0;
- (void)didDownloadResource:(id)a0;
- (void)didReceiveFeedbackData:(id)a0 agent:(id)a1;
- (id)init;
- (void)dealloc;
- (void)fileHandleAndAttributesForResource:(id)a0 completion:(id /* block */)a1;
- (void)updateParametersForSmartSearchV1:(id)a0 smartSearchV2:(id)a1;
- (void).cxx_destruct;
- (void)bag:(id)a0 reply:(id /* block */)a1;
- (void)clearEngagedResults:(id)a0 with:(id)a1 completion:(id /* block */)a2;
- (void)clearEngagementsFrom:(id)a0 to:(id)a1;
- (void)clearEngagementsWith:(id)a0 type:(id)a1;
- (void)forceFetchBag:(id)a0 reply:(id /* block */)a1;
- (void)getImageMap:(id /* block */)a0;
- (void)listSessions:(id /* block */)a0;
- (void)reportFeedback:(id)a0 feedback:(id)a1 queryId:(unsigned long long)a2;
- (unsigned long long)request:(id)a0 request:(id)a1 reply:(id /* block */)a2;

@end
