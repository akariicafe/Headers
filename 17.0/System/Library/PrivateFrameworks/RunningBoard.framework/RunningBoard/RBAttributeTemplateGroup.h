@class NSArray, NSDictionary, RBEntitlementPredicate, NSString, RBDomainRestriction;

@interface RBAttributeTemplateGroup : NSObject <RBAttributeTemplateConfiguring>

@property (retain, nonatomic) NSArray *attributes;
@property (copy, nonatomic) NSDictionary *targetBundleProperties;
@property (copy, nonatomic) RBEntitlementPredicate *originatorEntitlements;
@property (copy, nonatomic) RBEntitlementPredicate *targetEntitlements;
@property (copy, nonatomic) NSDictionary *additionalRestrictions;
@property (copy, nonatomic) RBDomainRestriction *restriction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
