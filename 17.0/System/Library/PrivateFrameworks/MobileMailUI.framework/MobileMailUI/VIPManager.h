@class NSObject, NSSet, NSString, EAEmailAddressSet, NSLock;
@protocol EMVIPManager, OS_dispatch_queue;

@interface VIPManager : NSObject <EMVIPManager> {
    NSLock *_abPersonByVIPIdentifierLock;
    struct __CFDictionary { } *_abPersonByVIPIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) struct os_unfair_lock_s { unsigned int x0; } *defaultInstanceLock;
@property (class, readonly, nonatomic) VIPManager *defaultInstance;

@property (readonly, nonatomic) id<EMVIPManager> backingManager;
@property (readonly, copy, nonatomic) NSSet *allVIPs;
@property (readonly, copy, nonatomic) EAEmailAddressSet *allVIPEmailAddresses;
@property (readonly, nonatomic) BOOL hasVIPs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setBackingManager:(id)a0;

- (void)getAllVIPsWithCompletion:(id /* block */)a0;
- (id)sortedVIPs;
- (void)deleteVIPWithIdentifier:(id)a0;
- (id)vipWithIdentifier:(id)a0;
- (BOOL)isVIPAddress:(id)a0;
- (void)_vipsDidChange:(id)a0;
- (void *)existingPersonForVIP:(id)a0 usingAddressBook:(void *)a1;
- (id)criterionForEmailAddresses:(id)a0;
- (id)vipForEmailAddresses:(id)a0 andDisplayNames:(id)a1;
- (void).cxx_destruct;
- (id)initWithBackingManager:(id)a0;
- (id)vipCriteria;
- (void)saveVIPs:(id)a0;
- (id)allVIPEmailAddressesCriterion;
- (void)saveVIP:(id)a0;
- (void)removeVIPsWithIdentifiers:(id)a0;
- (void)removeVIPsWithEmailAddresses:(id)a0;

@end
