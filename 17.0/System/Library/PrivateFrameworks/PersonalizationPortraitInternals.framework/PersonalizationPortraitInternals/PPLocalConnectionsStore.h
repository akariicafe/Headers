@class PPConnectionsDonationStore, NSCache, PPConnectionsPredictionStore;

@interface PPLocalConnectionsStore : NSObject <PPFeedbackAccepting, PPFeedbackProcessing> {
    PPConnectionsPredictionStore *_predictionStore;
    PPConnectionsDonationStore *_donationStore;
    NSCache *_identifierToSourceBundleMap;
    NSCache *_nameToIdentifierMap;
}

+ (id)defaultStore;

- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (id)recentLocationsForConsumer:(unsigned long long)a0 criteria:(id)a1 limit:(unsigned long long)a2 explanationSet:(id)a3 timeout:(unsigned long long)a4 error:(id *)a5;
- (id)initWithPredictionStore:(id)a0 donationStore:(id)a1;
- (void).cxx_destruct;
- (void)processFeedback:(id)a0;
- (id)recentLocationDonationsSinceDate:(id)a0 error:(id *)a1;

@end
