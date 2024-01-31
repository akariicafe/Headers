@class AMSDialogRequest, AMSDialogResult, AMSEngagementResult, NSError, AMSEngagement, AMSEngagementRequest;

@interface SeymourUI.MarketingPlacementProvider : NSObject <AMSEngagementObserver> {
    void /* unknown type, empty encoding */ registry;
    void /* unknown type, empty encoding */ engagement;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ subscriptionToken;
}

- (void)engagement:(id)a0 didUpdateRequest:(id)a1 placement:(id)a2 serviceType:(id)a3;
- (void)engagement:(AMSEngagement *)a0 handleEngagementRequest:(AMSEngagementRequest *)a1 completion:(void (^)(AMSEngagementResult *, NSError *))a2;
- (void)engagement:(AMSEngagement *)a0 handleDialogRequest:(AMSDialogRequest *)a1 completion:(void (^)(AMSDialogResult *, NSError *))a2;
- (id)init;
- (void).cxx_destruct;

@end
