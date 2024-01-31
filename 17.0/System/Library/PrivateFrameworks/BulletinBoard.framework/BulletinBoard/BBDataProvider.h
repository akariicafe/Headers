@class NSString, BBDataProviderIdentity;

@interface BBDataProvider : NSObject <BBSectionIdentity> {
    BBDataProviderIdentity *_identity;
}

@property (retain) BBDataProviderIdentity *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)debugDescriptionWithChildren:(unsigned long long)a0;
- (void)noteSectionInfoDidChange:(id)a0;
- (id)sectionIcon;
- (void)dataProviderDidLoad;
- (id)sectionParameters;
- (void)clearedInfoForClearingBulletinsFromDate:(id)a0 toDate:(id)a1 lastClearedInfo:(id)a2 completion:(id /* block */)a3;
- (BOOL)syncsBulletinDismissal;
- (void)invalidate;
- (BOOL)migrateSectionInfo:(id)a0 oldSectionInfo:(id)a1;
- (void)deliverMessageWithName:(id)a0 userInfo:(id)a1;
- (BOOL)initialized;
- (id)sectionIdentifier;
- (id)sectionDisplayName;
- (void)bulletinsWithRequestParameters:(id)a0 lastCleared:(id)a1 completion:(id /* block */)a2;
- (void)updateClearedInfoWithClearedInfo:(id)a0 handler:(id /* block */)a1 completion:(id /* block */)a2;
- (id)parentSectionIdentifier;
- (void)startWatchdog;
- (void)updateSectionInfoWithSectionInfo:(id)a0 handler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)a0 completion:(id /* block */)a1;
- (void)deliverResponse:(id)a0 forBulletinRequest:(id)a1 withCompletion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)displayNameForSubsectionID:(id)a0;
- (BOOL)canPerformMigration;
- (id)defaultSubsectionInfos;
- (id)sortDescriptors;
- (void)reloadIdentityWithCompletion:(id /* block */)a0;
- (id)defaultSectionInfo;
- (id)sectionBundlePath;
- (id)sortKey;
- (id)universalSectionIdentifier;
- (void)clearedInfoForBulletins:(id)a0 lastClearedInfo:(id)a1 completion:(id /* block */)a2;
- (BOOL)canClearAllBulletins;
- (BOOL)canClearBulletinsByDate;

@end
