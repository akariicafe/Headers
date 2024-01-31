@class NSString, VUIMediaEntitiesFetchController, VUIMediaEntity;

@interface VUIDownloadShowDataSource : VUIMediaEntitiesDataSource <VUIMediaEntitiesFetchControllerDelegate>

@property (retain, nonatomic) VUIMediaEntitiesFetchController *fetchController;
@property (retain, nonatomic) VUIMediaEntity *showEntity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)controller:(id)a0 fetchRequests:(id)a1 didCompleteWithResult:(id)a2;
- (void)controller:(id)a0 fetchRequests:(id)a1 didFailWithError:(id)a2;
- (id)fetchRequestForMediaEntity:(id)a0;
- (id)initWithMediaEntity:(id)a0;
- (void)startFetch;

@end
