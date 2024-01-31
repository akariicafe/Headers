@class NSEnumerator;

@interface BPSSequence : BMBookmarkablePublisher

@property (retain, nonatomic) NSEnumerator *enumerator;
@property (nonatomic) BOOL finished;

+ (id)new;

- (BOOL)completed;
- (id)init;
- (id)initWithSequence:(id)a0;
- (void)reset;
- (void)applyBookmark:(id)a0;
- (id)nextEvent;
- (id)initWithEnumerator:(id)a0;
- (id)upstreamPublishers;
- (void)subscribe:(id)a0;
- (id)initWithBookmarkableEnumerator:(id)a0;
- (void).cxx_destruct;
- (id)validateBookmark:(id)a0;
- (id)bookmark;
- (id)bookmarkableUpstreams;

@end
