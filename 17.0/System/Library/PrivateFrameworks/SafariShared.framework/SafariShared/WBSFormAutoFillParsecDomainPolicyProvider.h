@class NSString;
@protocol WBSCrowdsourcedFeedbackAllowList;

@interface WBSFormAutoFillParsecDomainPolicyProvider : NSObject <WBSFormAutoFillFeedbackDomainPolicyProvider> {
    id<WBSCrowdsourcedFeedbackAllowList> _feedbackAllowList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)autoFillFeedbackProcessor:(id)a0 determineWhetherToSendFeedbackForDomain:(id)a1 resultHandler:(id /* block */)a2;
- (void)getLastPolicyRetrievalURLStringWithResultHandler:(id /* block */)a0;
- (id)initWithFeedbackAllowList:(id)a0;
- (void)setPoliciesWithJSONData:(id)a0 retrievalURLString:(id)a1;

@end
