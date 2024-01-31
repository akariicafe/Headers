@interface GDViewServiceHelper : NSObject

+ (id)firstPartyShortTermTopicViewWithAccessAssertion:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)donationViewWithAccessAssertion:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)featureViewWithAccessAssertion:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)firstPartyLongTermTopicViewWithAccessAssertion:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)pageRankViewWithAccessAssertion:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)personViewWithAccessAssertion:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)remoteViewAccessRequester;
+ (id)visualIdentifierViewWithAccessAssertion:(id)a0 database:(id)a1 error:(id *)a2;

@end
