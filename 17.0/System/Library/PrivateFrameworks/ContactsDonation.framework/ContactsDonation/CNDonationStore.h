@protocol CNDonationAgentAdapter;

@interface CNDonationStore : NSObject

@property (readonly, nonatomic) id<CNDonationAgentAdapter> adapter;

- (id)init;
- (void)removeAllRejectionsWithCompletionHandler:(id /* block */)a0;
- (id)initWithAdapter:(id)a0;
- (id)changeFromAccount:(id)a0 toAccount:(id)a1;
- (void).cxx_destruct;
- (void)removeDonatedMeCardValuesForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)rejectValuesWithClusterIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)donatedMeCardEither;
- (void)rejectValueWithDonationIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)donateMeCardValues:(id)a0 completionHandler:(id /* block */)a1;
- (id)donatedMeCard;
- (id)meCardDonations;
- (void)fetchDonatedMeCard:(id /* block */)a0;

@end
