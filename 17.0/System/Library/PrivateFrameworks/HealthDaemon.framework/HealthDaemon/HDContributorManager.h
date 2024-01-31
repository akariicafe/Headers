@class HDProfile;

@interface HDContributorManager : NSObject {
    HDProfile *_profile;
}

- (id)initWithProfile:(id)a0;
- (id)insertOrLookupContributorEntityWithReference:(id)a0 transaction:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)_imPreferredAccount;
- (id)_primaryAppleAccount;
- (id)defaultContributorReference;
- (id)contributorForReference:(id)a0 error:(id *)a1;

@end
