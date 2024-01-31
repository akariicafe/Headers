@class NSString, NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface IDSFirewall : NSObject

@property (retain, nonatomic) NSString *service;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSSet *impactedServiceIdentifiers;

- (void)removeAllEntries:(id /* block */)a0;
- (void)replaceDonatedEntriesWithEntries:(id)a0 withCompletion:(id /* block */)a1;
- (void)recentlyBlockedEntries:(id /* block */)a0;
- (void)removeDonatedEntries:(id)a0 withCompletion:(id /* block */)a1;
- (void)populateImpactedServices:(id /* block */)a0;
- (void)replaceAllEntriesWithEntries:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeAllDonatedEntries:(id /* block */)a0;
- (void)addEntries:(id)a0 withCompletion:(id /* block */)a1;
- (id)description;
- (void).cxx_destruct;
- (void)replaceEntries:(id)a0 withCompletion:(id /* block */)a1;
- (void)donateEntries:(id)a0 withCompletion:(id /* block */)a1;
- (void)currentDonatedEntries:(id /* block */)a0;
- (void)removeEntries:(id)a0 withCompletion:(id /* block */)a1;
- (id)initWithService:(id)a0 queue:(id)a1;
- (void)currentEntries:(id /* block */)a0;
- (id)_removeInvalidEntries:(id)a0;

@end
