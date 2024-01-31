@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WBSAutoFillAssociatedDomainsManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_domainToDomainsWithAssociatedCredentials;
    NSMutableDictionary *_domainsToDomainsToConsiderIdentical;
}

@property (copy, nonatomic) NSArray *domainsWithAssociatedCredentials;
@property (copy, nonatomic) NSArray *domainsToConsiderIdentical;

- (id)init;
- (void).cxx_destruct;
- (id)domainsWithAssociatedCredentialsForDomain:(id)a0;
- (id)domainsToConsiderIdenticalToDomain:(id)a0;
- (void)_updateDomainToDomainsToConsiderIdentical;
- (void)_updateDomainToDomainsWithAssociatedCredentials;
- (id)initWithDomainsWithAssociatedCredentials:(id)a0;
- (id)initWithDomainsWithAssociatedCredentials:(id)a0 domainsToConsiderIdentical:(id)a1;

@end
