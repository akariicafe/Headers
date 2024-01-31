@class NSMutableArray;

@interface _IKDSEPrototypeBundle : NSObject {
    NSMutableArray *_prototypes;
    NSMutableArray *_entries;
    struct { BOOL areEntriesDirty; } _flags;
}

- (id)init;
- (void).cxx_destruct;
- (void)addPrototype:(id)a0 forIndexes:(id)a1;
- (id)allPrototypes;
- (id)prototypeForItemAtIndex:(unsigned long long)a0;

@end
