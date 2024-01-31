@interface _TtCC10PodcastsUI18PlaybackController18ResponseDataSource : NSObject <MPRequestResponseControllerDelegate> {
    void /* unknown type, empty encoding */ playerRequestController;
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ pathCoordinator;
    void /* unknown type, empty encoding */ responsePublisher;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)controller:(id)a0 defersResponseReplacement:(id /* block */)a1;
- (BOOL)controller:(id)a0 shouldRetryFailedRequestWithError:(id)a1;

@end
