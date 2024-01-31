@class IKAppPrototypeIdentifier, NSDictionary, IKDOMPrototype, NSIndexSet, NSMutableIndexSet;

@interface IKAppPrototype : NSObject {
    NSMutableIndexSet *_usageIndexes;
}

@property (readonly, nonatomic) IKAppPrototypeIdentifier *identifier;
@property (readonly, weak, nonatomic) IKDOMPrototype *prototype;
@property (readonly, copy, nonatomic) NSDictionary *groupingValues;
@property (readonly, copy, nonatomic) NSIndexSet *usageIndexes;

- (void).cxx_destruct;
- (id)_sparseObjectFromObject:(id)a0 usingPropertyPaths:(id)a1;
- (void)addUsageForIndex:(long long)a0;
- (void)dsepm_setViewElement:(id)a0;
- (id)dsepm_viewElement;
- (id)initWithPrototype:(id)a0 dataItem:(id)a1;
- (void)removeUsageForIndex:(long long)a0;
- (void)updateUsageIndexesWithChangeSet:(id)a0;

@end
