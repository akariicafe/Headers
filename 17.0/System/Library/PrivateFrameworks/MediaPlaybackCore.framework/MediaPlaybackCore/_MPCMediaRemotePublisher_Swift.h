@class NSString, MPSetPlaybackQueueCommandEvent, MPSetPlaybackSessionCommandEvent, NSError;

@interface _MPCMediaRemotePublisher_Swift : NSObject {
    void /* unknown type, empty encoding */ publisher;
}

- (id)init;
- (void).cxx_destruct;
- (void)findContentItemIDWithIncomingContentItemID:(NSString *)a0 trackID:(long long)a1 completion:(void (^)(NSString *, NSError *))a2;
- (id)initWithPublisher:(id)a0;
- (void)performSetQueueWithEvent:(MPSetPlaybackQueueCommandEvent *)a0 completion:(void (^)(NSError *))a1;
- (void)performSetSessionWithEvent:(MPSetPlaybackSessionCommandEvent *)a0 completion:(void (^)(NSError *))a1;

@end
