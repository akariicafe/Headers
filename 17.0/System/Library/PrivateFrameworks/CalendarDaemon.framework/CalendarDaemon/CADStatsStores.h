@class CADStatCollectionContext, NSMutableArray;

@interface CADStatsStores : CADStatCollector {
    CADStatCollectionContext *_context;
    NSMutableArray *_storeInfos;
}

+ (id)eventName;

- (id)eventDictionaries;
- (void).cxx_destruct;
- (void)prepareWithContext:(id)a0;
- (void)processStores:(id)a0;
- (BOOL)wantsStores;

@end
