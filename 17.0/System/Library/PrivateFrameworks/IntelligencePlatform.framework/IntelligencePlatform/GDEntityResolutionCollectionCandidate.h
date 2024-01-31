@class NSString;

@interface GDEntityResolutionCollectionCandidate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *primaryName;
@property (readonly, copy, nonatomic) NSString *personToPerson;
@property (readonly, copy, nonatomic) NSString *aliasConcat;
@property (readonly, copy, nonatomic) NSString *entityAliasConcat;
@property (readonly, copy, nonatomic) NSString *personFromOrganization;
@property (readonly, copy, nonatomic) NSString *personFromLocation;
@property (readonly, copy, nonatomic) NSString *personFromEventLocation;
@property (readonly, copy, nonatomic) NSString *personFromEvent;
@property (readonly, nonatomic) long long firstPartyMsgTwoWeeks;
@property (readonly, nonatomic) long long firstPartyMsgSixWeeks;
@property (readonly, nonatomic) long long firstPartyMsgThreeMonths;
@property (readonly, nonatomic) long long firstPartyMsgSixMonths;
@property (readonly, nonatomic) long long thirdPartyMsgTwoWeeks;
@property (readonly, nonatomic) long long thirdPartyMsgSixWeeks;
@property (readonly, nonatomic) long long thirdPartyMsgThreeMonths;
@property (readonly, nonatomic) long long thirdPartyMsgSixMonths;
@property (readonly, nonatomic) long long callTwoWeeks;
@property (readonly, nonatomic) long long callSixWeeks;
@property (readonly, nonatomic) long long callTwelveWeeks;
@property (readonly, nonatomic) long long callSixMonths;
@property (readonly, copy, nonatomic) NSString *identifier;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPrimaryName:(id)a0 personToPerson:(id)a1 aliasConcat:(id)a2 entityAliasConcat:(id)a3 personFromOrganization:(id)a4 personFromLocation:(id)a5 personFromEventLocation:(id)a6 personFromEvent:(id)a7 firstPartyMsgTwoWeeks:(long long)a8 firstPartyMsgSixWeeks:(long long)a9 firstPartyMsgThreeMonths:(long long)a10 firstPartyMsgSixMonths:(long long)a11 thirdPartyMsgTwoWeeks:(long long)a12 thirdPartyMsgSixWeeks:(long long)a13 thirdPartyMsgThreeMonths:(long long)a14 thirdPartyMsgSixMonths:(long long)a15 callTwoWeeks:(long long)a16 callSixWeeks:(long long)a17 callTwelveWeeks:(long long)a18 callSixMonths:(long long)a19 identifier:(id)a20;

@end
