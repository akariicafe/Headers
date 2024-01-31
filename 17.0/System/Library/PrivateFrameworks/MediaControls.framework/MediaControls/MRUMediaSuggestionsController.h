@class MRUEndpointController, NSArray, NSString, MRUMetadataController, NSDate, NSObject, MRULockScreenMonitor;
@protocol OS_dispatch_queue, MRUMediaSuggestionsDataSource, MRUMediaSuggestionsControllerDelegate;

@interface MRUMediaSuggestionsController : NSObject <MRUEndpointControllerObserver, MRUMetadataControllerObserver, MRUMediaSuggestionsDataSourceDelegate, MRULockScreenMonitorObserver>

@property (retain, nonatomic) MRULockScreenMonitor *lockscreenMonitor;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (retain, nonatomic) NSDate *lastPlayingDate;
@property (nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) MRUEndpointController *endpointController;
@property (readonly, nonatomic) MRUMetadataController *metadataController;
@property (retain, nonatomic) id<MRUMediaSuggestionsDataSource> dataSource;
@property (weak, nonatomic) id<MRUMediaSuggestionsControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *mediaSuggestions;
@property (retain, nonatomic) NSString *context;
@property (nonatomic) BOOL isQueueHandoffActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshMediaSuggestions;
- (void)mediaSuggestionsDataSource:(id)a0 didChangeMediaSuggestions:(id)a1;
- (void)updateMediaSuggestions;
- (void).cxx_destruct;
- (void)metadataController:(id)a0 didChangeNowPlayingInfo:(id)a1;
- (void)updateLastPlayedDate;
- (void)playSuggestion:(id)a0 completion:(id /* block */)a1;
- (void)updatePlayingState;
- (id)initWithEndpointController:(id)a0 metadataController:(id)a1 dataSource:(id)a2;
- (void)lockscreenMonitor:(id)a0 didUpdateDeviceLocked:(BOOL)a1;
- (void)endpointController:(id)a0 didChangeRoute:(id)a1;
- (void)setMediaSuggestions:(id)a0;

@end
