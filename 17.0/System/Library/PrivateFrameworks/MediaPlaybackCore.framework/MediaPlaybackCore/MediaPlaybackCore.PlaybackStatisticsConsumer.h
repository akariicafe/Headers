@class NSString;

@interface MediaPlaybackCore.PlaybackStatisticsConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    void /* unknown type, empty encoding */ playbackEngine;
    void /* unknown type, empty encoding */ subscription;
}

@property (class, nonatomic, readonly) NSString *identifier;

- (id)init;
- (void)unsubscribeFromEventStream:(id)a0;
- (void).cxx_destruct;
- (void)subscribeToEventStream:(id)a0;

@end
