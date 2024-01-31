@interface _TtCC26AIMLInstrumentationStreams20EventGraphsPublisher34ConnectedComponentGroupsSubscriber : NSObject <BPSSubscriber> {
    void /* unknown type, empty encoding */ downstream;
    void /* unknown type, empty encoding */ graphBuilder;
    void /* unknown type, empty encoding */ logicalClockBuilder;
    void /* unknown type, empty encoding */ eventTypeBuilder;
    void /* unknown type, empty encoding */ graphSessionWindowLength;
    void /* unknown type, empty encoding */ dimExpiryTime;
    void /* unknown type, empty encoding */ latestRecievedTimestamp;
    void /* unknown type, empty encoding */ upstreamFinished;
    void /* unknown type, empty encoding */ logger;
}

- (id)init;
- (void)receiveCompletion:(id)a0;
- (void)receiveSubscription:(id)a0;
- (long long)receiveInput:(id)a0;
- (void).cxx_destruct;
- (void)cancel;

@end
