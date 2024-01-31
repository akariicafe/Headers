@class BPSPublisher, NSArray, NSString;

@interface BMBookmarkWrapper : BPSPublisher <BMBookmarkablePublisher>

@property (readonly, nonatomic) BPSPublisher *upstream;
@property (readonly, nonatomic) id initialState;
@property (readonly, nonatomic) NSArray *bookmarkableUpstreams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)publisherWithPublisher:(id)a0 upstreams:(id)a1 bookmarkState:(id)a2;

- (BOOL)canStorePassThroughValueInBookmark;
- (id)init;
- (id)initWithUpstream:(id)a0 initialState:(id)a1;
- (id)withBookmark:(id)a0;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (BOOL)canStoreInternalStateInBookmark;

@end
