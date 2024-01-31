@class MusicKit_SoftLinking_MPCPlayerRequest, NSString, MPRequestResponseController;
@protocol MusicKit_SoftLinking_MPCPlayerResponse;

@interface MusicKit_SoftLinking_MPRequestResponseController : NSObject <MPRequestResponseControllerDelegate> {
    MPRequestResponseController *_underlyingRequestResponseController;
}

@property (retain, nonatomic) MusicKit_SoftLinking_MPCPlayerRequest *request;
@property (readonly, nonatomic) id<MusicKit_SoftLinking_MPCPlayerResponse> response;
@property (copy, nonatomic) id /* block */ responseHandler;
@property (copy, nonatomic) id /* block */ shouldRetryFailedRequestWithErrorHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endAutomaticResponseLoading;
- (id)init;
- (void)setNeedsReload;
- (void).cxx_destruct;
- (void)controller:(id)a0 defersResponseReplacement:(id /* block */)a1;
- (void)reloadIfNeeded;
- (void)setNeedsReloadForSignificantRequestChange;
- (void)beginAutomaticResponseLoading;
- (BOOL)controller:(id)a0 shouldRetryFailedRequestWithError:(id)a1;
- (id)initWithUnderlyingRequestResponseController:(id)a0;

@end
