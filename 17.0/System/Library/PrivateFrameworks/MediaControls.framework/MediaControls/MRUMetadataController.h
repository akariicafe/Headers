@class MRUNowPlayingInfo, NSString, MRUArtwork, NSHashTable, MRUTimeControls, MRUTransportControls;
@protocol MRUMetadataDataSource;

@interface MRUMetadataController : NSObject <MRUMetadataDataSourceDelegate>

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) id<MRUMetadataDataSource> dataSource;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) MRUArtwork *artwork;
@property (readonly, nonatomic) MRUNowPlayingInfo *nowPlayingInfo;
@property (readonly, nonatomic) MRUTimeControls *timeControls;
@property (readonly, nonatomic) MRUTransportControls *transportControls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)representsLongFormVideoContentWithCompletion:(id /* block */)a0;
- (void)removeObserver:(id)a0;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)metadataDataSource:(id)a0 didChangeArtwork:(id)a1;
- (void)metadataDataSource:(id)a0 didChangeBundleID:(id)a1;
- (void)metadataDataSource:(id)a0 didChangeNowPlayingInfo:(id)a1;
- (void)metadataDataSource:(id)a0 didChangeTimeControls:(id)a1;
- (void)metadataDataSource:(id)a0 didChangeTransportControls:(id)a1;

@end
