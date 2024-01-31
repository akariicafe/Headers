@class NSSet, NSURL, NSString;

@interface PDCFileBackedConsentStore : NSObject <PDCConsentStore>

@property (readonly, copy, nonatomic) NSSet *consentedBundleIdentifiers;
@property (readonly, copy, nonatomic) NSURL *storeURL;
@property (copy, nonatomic) id /* block */ changeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)consentRecordURLForBundleIdentifier:(id)a0;
- (id)initWithConsentStoreURL:(id)a0;
- (id)userConsentedRegulatoryDisclosureVersionForBundleIdentifier:(id)a0;
- (id)writeUserConsentedRegulatoryDisclosureVersion:(id)a0 forBundleIdentifier:(id)a1;

@end
