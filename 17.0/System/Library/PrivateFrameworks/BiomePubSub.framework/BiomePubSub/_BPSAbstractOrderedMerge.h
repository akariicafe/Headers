@class NSMutableArray, NSMutableSet;
@protocol BPSSubscriber;

@interface _BPSAbstractOrderedMerge : BMBookmarkableSubscription {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _downstreamLock;
}

@property (nonatomic) unsigned long long upstreamCount;
@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (retain, nonatomic) NSMutableArray *subscriptions;
@property (retain, nonatomic) NSMutableArray *buffers;
@property (retain, nonatomic) NSMutableArray *requestsPerSubscription;
@property (retain, nonatomic) NSMutableArray *upstreamBookmarks;
@property (retain, nonatomic) NSMutableSet *completedUpstreamIndexes;
@property (nonatomic) BOOL recursion;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL errored;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) long long demand;
@property (nonatomic) unsigned long long finishCount;

- (void)_guardedBecomeTerminal;
- (BOOL)_isBuffersEmpty;
- (id)upstreamSubscriptions;
- (void)receiveCompletion:(id)a0 atIndex:(unsigned long long)a1;
- (void)requestDemand:(long long)a0;
- (id)newBookmark;
- (void)receiveSubscription:(id)a0 atIndex:(unsigned long long)a1;
- (id)nextValueIndex:(id *)a0;
- (BOOL)isWaitingForMoreValues;
- (void)updateBookmarksWhenLockedForIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)cancel;
- (void)_completeWhileLockedWithCompletion:(id)a0;
- (id)initWithDownstream:(id)a0 upstreamCount:(unsigned long long)a1;
- (void)flushBufferAndRequestMoreWhileLocked;
- (long long)receiveInput:(id)a0 atIndex:(unsigned long long)a1;
- (long long)compareFirst:(id)a0 withSecond:(id)a1;

@end
