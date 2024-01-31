@class PPSWStringDonation;

@interface PPSWStringDonationConsumer : PersonalizationPortraitInternals.Consumer

- (id)init;
- (id)initWithTopicStore:(id)a0 entityStore:(id)a1 locationStore:(id)a2 writebackDissector:(id)a3 entityDissector:(id)a4 topicDissector:(id)a5;
- (void)consumeWithDonation:(PPSWStringDonation *)a0 completionHandler:(void (^)(void))a1;
- (id)initWithTopicStore:(id)a0 entityStore:(id)a1 locationStore:(id)a2 entityDissector:(id)a3 topicDissector:(id)a4;

@end
