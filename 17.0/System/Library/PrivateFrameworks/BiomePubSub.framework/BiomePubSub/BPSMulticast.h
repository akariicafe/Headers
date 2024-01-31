@class NSMutableDictionary, NSString, NSMutableArray, BPSMulticastDownstream;
@protocol BPSPublisher, BPSSubscriber, BPSSubject;

@interface BPSMulticast : BMBookmarkablePublisher <BPSConnectablePublisher, BPSSubscriber> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id<BPSSubject, BPSSubscriber> _subject;
}

@property (nonatomic) BOOL connected;
@property (nonatomic) unsigned long long bookmarkCount;
@property (nonatomic) unsigned long long resetCount;
@property (retain, nonatomic) NSMutableArray *downstreams;
@property (retain, nonatomic) NSMutableDictionary *pendingEvents;
@property (weak, nonatomic) BPSMulticastDownstream *electedMainDownstream;
@property (readonly, nonatomic) id<BPSPublisher> upstream;
@property (readonly, nonatomic) id /* block */ createSubject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (id)startWithSubscriber:(id)a0;
- (void)subscribeTo:(id)a0;
- (void)reset;
- (void)applyBookmark:(id)a0;
- (void)applyBookmarkNode:(id)a0;
- (id)initWithUpstream:(id)a0 createSubject:(id /* block */)a1;
- (id)nextEvent;
- (id)lazySubject;
- (void)connect;
- (id)upstreamPublishers;
- (void)subscribe:(id)a0;
- (void)requestNextEvents;
- (void).cxx_destruct;
- (id)validateBookmark:(id)a0;
- (BOOL)canStoreInternalStateInBookmark;
- (void)_connect;
- (id)bookmark;
- (id)bookmarkableUpstreams;
- (void)registerMulticastDownstream:(id)a0;
- (id)nextEventForMulticastDownstream:(id)a0;
- (id)toPublisher;
- (BOOL)completedForMulticastDownstream:(id)a0;

@end
