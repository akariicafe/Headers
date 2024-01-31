@interface PKStoreKitReviewPromptHelper : NSObject <PKStoreReviewPromptHelperProtocol>

- (BOOL)_hasBeenPromptedRecently;
- (BOOL)_hasViewedFrontOfCard;
- (BOOL)isEligibleForReviewPrompt;
- (void)requestReviewInScene:(id)a0 trigger:(unsigned long long)a1;
- (void)requestReviewInSceneIfEligible:(id)a0 trigger:(unsigned long long)a1;

@end
