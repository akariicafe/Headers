@class NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue, MPMutableIdentifierListSection;

@interface MPModelLibraryPlaylistEditDataSource : NSObject <MPSectionedIdentifierListDataSource> {
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly, copy, nonatomic) NSDictionary *playlistEntriesByIdentifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, weak, nonatomic) id<MPMutableIdentifierListSection> dataSourceSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reload;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_handleMPMediaLibraryEntitiesAddedOrRemovedNotification:(id)a0;
- (void)_reloadWithCompletion:(id /* block */)a0;
- (void)loadEntriesWithCompletion:(id /* block */)a0;
- (id)newPlaylistEntryForTrack:(id)a0;
- (void)reloadSection:(id)a0 completion:(id /* block */)a1;

@end
