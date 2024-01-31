@class IDSServerBagNetworkLoader, NSString, IDSServerBagValidator, IDSServerBagCacheLoader, NSMutableDictionary, NSObject, IDSServerBagRawContents, IDSServerBagConfig;
@protocol OS_dispatch_queue;

@interface IDSServerBagInProcessContentProvider : NSObject <IDSServerBagContentProvider>

@property (retain, nonatomic) IDSServerBagRawContents *loadedRawContents;
@property (retain, nonatomic) NSMutableDictionary *overrideValues;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (retain, nonatomic) IDSServerBagConfig *config;
@property (retain, nonatomic) IDSServerBagNetworkLoader *networkLoader;
@property (retain, nonatomic) IDSServerBagCacheLoader *cacheLoader;
@property (retain, nonatomic) IDSServerBagValidator *validator;
@property (copy, nonatomic) id /* block */ contentsUpdatedBlock;
@property (readonly, nonatomic) BOOL isLoading;
@property (readonly, nonatomic) BOOL isServerAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)currentLoadedContentsWithError:(id *)a0;
- (id)clearOverrideValues;
- (id)initWithConfig:(id)a0 queue:(id)a1;
- (id)initWithConfig:(id)a0 queue:(id)a1 validator:(id)a2 networkLoader:(id)a3 cacheLoader:(id)a4;
- (id)loadOverrideValuesIfPresent;
- (id)updateContentsIfPossibleShouldForce:(BOOL)a0;
- (id)writeOverrideValues:(id)a0;

@end
