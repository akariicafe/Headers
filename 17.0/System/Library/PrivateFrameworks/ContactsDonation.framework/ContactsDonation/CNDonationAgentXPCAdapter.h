@class NSString;

@interface CNDonationAgentXPCAdapter : NSObject <CNDonationAgentAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)removeAllRejectionsWithScope:(id)a0;
+ (void)removeDonatedMeCardValuesForIdentifiers:(id)a0 scope:(id)a1;
+ (void)donateMeCardValues:(id)a0 scope:(id)a1;
+ (void)rejectValuesWithClusterIdentifier:(id)a0 scope:(id)a1;
+ (void)changeFromAccount:(id)a0 toAccount:(id)a1 scope:(id)a2;
+ (void)meCardDonationsWithScope:(id)a0;
+ (void)fetchDonatedMeCardWithScope:(id)a0;
+ (id)newXPCConnection;
+ (void)rejectValueWithDonationIdentifier:(id)a0 scope:(id)a1;

- (id)removeDonatedMeCardValuesForIdentifiers:(id)a0;
- (id)rejectValueWithDonationIdentifier:(id)a0;
- (id)fetchDonatedMeCard;
- (id)removeAllRejections;
- (id)rejectValuesWithClusterIdentifier:(id)a0;
- (id)changeFromAccount:(id)a0 toAccount:(id)a1;
- (id)donatedMeCardEither;
- (id)donateMeCardValues:(id)a0;
- (id)meCardDonations;

@end
