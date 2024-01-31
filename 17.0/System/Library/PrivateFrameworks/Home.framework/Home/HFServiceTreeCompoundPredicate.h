@class NSArray, NAIdentity, NSString;
@protocol HFServiceTreeMatching;

@interface HFServiceTreeCompoundPredicate : NSObject <HFServiceTreeMatching>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly, nonatomic) id<HFServiceTreeMatching> rootServicePredicate;
@property (readonly, copy, nonatomic) NSArray *childServicePredicates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)matchingServicesForRootService:(id)a0;
- (id)initWithRootServicePredicate:(id)a0 childServicePredicates:(id)a1;

@end
