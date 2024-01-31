@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BWColorLookupCache : NSObject {
    NSObject<OS_dispatch_queue> *_coreImageCacheIsolationQueue;
    NSMutableDictionary *_coreImageTableCache;
}

+ (void)initialize;

- (id)init;
- (id)blackColorLookupTable;
- (void)dealloc;
- (id)identityColorLookupTable;
- (id)fetchColorLookupTablesForFilter:(id)a0;
- (id)interpolatedColorLookupTableFromTable:(id)a0 toTable:(id)a1 fractionComplete:(float)a2;
- (id)colorLookupTablesForFilter:(id)a0;
- (id)whiteColorLookupTable;

@end
