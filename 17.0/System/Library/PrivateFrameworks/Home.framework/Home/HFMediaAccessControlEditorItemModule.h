@class NSString, HFMediaAccessControlEditorItemProvider, NSSet, HMHome;

@interface HFMediaAccessControlEditorItemModule : HFItemModule <HFHomeObserver> {
    NSSet *_itemProviders;
}

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HFMediaAccessControlEditorItemProvider *accessControlEditorItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_descriptionFooterTextForAccessControlDescriptor:(id)a0 hasNonPeerToPeerMediaAccessories:(BOOL)a1;

- (BOOL)containsItem:(id)a0;
- (void)home:(id)a0 didUpdateMediaPeerToPeerEnabled:(BOOL)a1;
- (void)home:(id)a0 didUpdateMediaPassword:(id)a1;
- (void).cxx_destruct;
- (void)home:(id)a0 didUpdateMinimumMediaUserPrivilege:(long long)a1;
- (id)itemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1;
- (id)updateAccessControlDescriptor:(id)a0;
- (BOOL)_hasNonPeerToPeerMediaAccessories;

@end
