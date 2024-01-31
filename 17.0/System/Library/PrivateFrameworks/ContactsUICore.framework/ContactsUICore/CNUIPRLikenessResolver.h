@class CNContactStore, NSString, _CNUILikenessCache, CNSchedulerProvider;
@protocol CNSchedulerProvider, CNUIPlaceholderProviderFactory, CNUIPRLikenessResolver;

@interface CNUIPRLikenessResolver : NSObject <CNUIPRLikenessResolver>

@property (retain, nonatomic) id<CNUIPRLikenessResolver> likenessResolver;
@property (retain, nonatomic) _CNUILikenessCache *likenessCache;
@property (retain, nonatomic) id<CNSchedulerProvider> mainThreadSchedulerProvider;
@property (retain, nonatomic) id<CNUIPlaceholderProviderFactory> placeholderProviderFactory;
@property (nonatomic) long long prohibitedSources;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) CNSchedulerProvider *schedulerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (id)_cacheKeyForContact:(id)a0;
+ (unsigned long long)maxContacts;

- (id)likenessesForContact:(id)a0 options:(id)a1 workScheduler:(id)a2;
- (void)dealloc;
- (id)initWithContactStore:(id)a0 scheduler:(id)a1 meMonitor:(id)a2;
- (id)basicMonogramObservableFromString:(id)a0 color:(id)a1;
- (id)initWithContactStore:(id)a0 scheduler:(id)a1;
- (id)badgeObservableWithLikenessBadge:(id)a0 workScheduler:(id)a1;
- (void).cxx_destruct;
- (id)resolveLikenessesForContacts:(id)a0 workScheduler:(id)a1 withContentHandler:(id /* block */)a2;
- (id)likenessesForContact:(id)a0 workScheduler:(id)a1;
- (id)initWithLikenessResolver:(id)a0;
- (id)initWithLikenessResolver:(id)a0 capacity:(unsigned long long)a1;
- (id)initWithLikenessResolver:(id)a0 capacity:(unsigned long long)a1 schedulerProvider:(id)a2;
- (id)likenessLookup;

@end
