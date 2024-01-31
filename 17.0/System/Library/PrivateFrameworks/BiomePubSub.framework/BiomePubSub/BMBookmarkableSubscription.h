@interface BMBookmarkableSubscription : BPSSubscription <BMBookmarkableSubscription>

- (id)upstreamSubscriptions;
- (void)requestDemand:(long long)a0;
- (id)newBookmark;
- (void)cancel;

@end
