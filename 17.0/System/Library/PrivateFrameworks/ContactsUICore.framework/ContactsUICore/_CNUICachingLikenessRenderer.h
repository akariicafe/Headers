@class CNAvatarCacheChangeListener, NSString, _CNUILikenessImageCache, _CNUILikenessRenderer, NSPointerArray;
@protocol CNSchedulerProvider;

@interface _CNUICachingLikenessRenderer : NSObject <CNUILikenessRendering, CNUILikenessCachingRenderer, CNAvatarCacheChangeListenerDelegate>

@property (readonly, nonatomic) _CNUILikenessRenderer *renderer;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) BOOL shouldRequireMainThread;
@property (retain, nonatomic) _CNUILikenessImageCache *imageCache;
@property (retain, nonatomic) id<CNSchedulerProvider> mainThreadSchedulerProvider;
@property (retain, nonatomic) CNAvatarCacheChangeListener *changeHistoryListener;
@property (retain, nonatomic) NSPointerArray *delegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)_cacheKeyForContacts:(id)a0 scope:(id)a1;
+ (id)createMainThreadSchedulerProviderWithSchedulerProvider:(id)a0;

- (void)dealloc;
- (void)addDelegate:(id)a0;
- (id)renderedBasicMonogramFromString:(id)a0 scope:(id)a1;
- (id)renderedLikenessesForContacts:(id)a0 withBadges:(id)a1 scope:(id)a2 workScheduler:(id)a3;
- (id)renderedBasicMonogramForString:(id)a0 color:(id)a1 scope:(id)a2 prohibitedSources:(long long)a3;
- (id)renderedLikenessesForContacts:(id)a0 scope:(id)a1 workScheduler:(id)a2;
- (void).cxx_destruct;
- (id)renderedLikenessForBadge:(id)a0 scope:(id)a1 workScheduler:(id)a2;
- (id)loadingPlaceholderForContactCount:(unsigned long long)a0 scope:(id)a1;
- (void)updateContactsWithIdentifiers:(id)a0;
- (id)initWithLikenessRenderer:(id)a0 schedulerProvider:(id)a1;
- (id)initWithLikenessRenderer:(id)a0 schedulerProvider:(id)a1 capacity:(unsigned long long)a2 shouldRequireMainThread:(BOOL)a3;
- (id)initWithLikenessRenderer:(id)a0 schedulerProvider:(id)a1 capacity:(unsigned long long)a2 shouldRequireMainThread:(BOOL)a3 contactStore:(id)a4;
- (id)initialRenderedLikenessesForContacts:(id)a0 withBadges:(id)a1 scope:(id)a2 workScheduler:(id)a3;
- (id)resizeCacheEntry:(id)a0 withScope:(id)a1 workScheduler:(id)a2;
- (id)startCacheEntryWithObservable:(id)a0 contacts:(id)a1 scope:(id)a2;

@end
