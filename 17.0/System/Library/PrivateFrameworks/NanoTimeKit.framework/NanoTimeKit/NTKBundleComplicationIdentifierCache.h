@class NSString, NSURL, NSObject, NTKBundleComplicationIdentifierCacheModel;
@protocol OS_dispatch_queue;

@interface NTKBundleComplicationIdentifierCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSURL *overrideUrl;
@property (retain, nonatomic) NSString *overrideIdentifier;
@property (readonly, nonatomic) NTKBundleComplicationIdentifierCacheModel *model;

- (id)init;
- (void)_load;
- (id)_cacheURL;
- (void).cxx_destruct;
- (void)_enumerateBundles:(id /* block */)a0;
- (id)_expectedCacheIdentifier;
- (void)_loadCachedModel;
- (void)_queue_fetchIdentifiersForComplication:(id)a0 completion:(id /* block */)a1;
- (void)_updateCacheModel:(id)a0;
- (void)fetchIdentifiersForComplication:(id)a0 completion:(id /* block */)a1;

@end
