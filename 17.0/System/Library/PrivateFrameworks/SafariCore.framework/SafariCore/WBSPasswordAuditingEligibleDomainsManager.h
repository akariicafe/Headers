@class NSSet;

@interface WBSPasswordAuditingEligibleDomainsManager : NSObject

@property (copy) NSSet *domainsIneligibleForPasswordAuditing;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDomainsIneligibleForPasswordAuditing:(id)a0;

@end
