@class NSString, NSArray, WBTabGroupManager, NSItemProvider, WBTabGroup, NSMutableArray, LPLinkMetadata, CKShare;

@interface SFTabGroupActivityItemConfiguration : NSObject <UIActivityItemsConfigurationReading> {
    CKShare *_existingShare;
    LPLinkMetadata *_linkMetadata;
    NSMutableArray *_pendingShareCompletionHandlers;
}

@property (readonly, nonatomic) NSItemProvider *itemProvider;
@property (readonly, nonatomic) WBTabGroup *tabGroup;
@property (readonly, nonatomic) WBTabGroupManager *tabGroupManager;
@property (readonly, copy, nonatomic) NSArray *itemProvidersForActivityItemsConfiguration;
@property (readonly, copy, nonatomic) NSArray *applicationActivitiesForActivityItemsConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)activityItemsConfigurationMetadataForItemAtIndex:(long long)a0 key:(id)a1;
- (id)activityItemsConfigurationMetadataForKey:(id)a0;
- (void)_beginSharingTabGroupWithCompletionHandler:(id /* block */)a0;
- (void)_presentSharedTabGroupsManateePrompt;
- (id)initWithTabGroup:(id)a0 inTabGroupManager:(id)a1 existingShare:(id)a2 icon:(id)a3;
- (void)updateMetadataIcon:(id)a0;

@end
