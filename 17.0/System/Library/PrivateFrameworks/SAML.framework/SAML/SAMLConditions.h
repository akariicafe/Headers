@class NSArray, NSNumber, NSDate;

@interface SAMLConditions : SAMLBaseElement

@property (readonly, nonatomic) NSDate *notBefore;
@property (readonly, nonatomic) NSDate *notOnOrAfter;
@property (readonly, nonatomic) NSArray *conditions;
@property (readonly, nonatomic) NSArray *audienceRestrictions;
@property (readonly, nonatomic) BOOL oneTimeUse;
@property (readonly, nonatomic) NSArray *proxyRestrictions;
@property (readonly, nonatomic) NSNumber *proxyRestrictionAudienceCount;

+ (id)createElement:(id *)a0;

- (void).cxx_destruct;
- (BOOL)assertionMeetsConditions:(id *)a0;

@end
