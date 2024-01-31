@class NSArray;

@interface AIMLInstrumentationStreams.SiriConversationPublisher : BMBookmarkablePublisher {
    void /* unknown type, empty encoding */ upstream;
    void /* unknown type, empty encoding */ inner;
}

@property (nonatomic, readonly) NSArray *bookmarkableUpstreams;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)init;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;

@end
