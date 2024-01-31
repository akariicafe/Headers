@class NSSet, NSString, NSMutableDictionary, CAContext, NSMapTable;
@protocol UISSlotDrawer;

@interface UISSlotMachine : NSObject <UISSlotMachineProtocol> {
    id<UISSlotDrawer> _slotDrawer;
    unsigned long long _options;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedContentsLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _layerContextLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _LRUTagsByClassLock;
    NSMutableDictionary *_cachedContents;
    CAContext *_layerContext;
    NSMapTable *_LRUTagsByClass;
}

@property (readonly, nonatomic) NSSet *allTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allowedLocalizations;

- (void)removeContentsForTag:(id)a0;
- (id)initWithSlotDrawer:(id)a0 options:(unsigned long long)a1;
- (void)getRemoteContentForLayerContextWithId:(unsigned long long)a0 style:(id)a1 tag:(id)a2 reply:(id /* block */)a3;
- (id)remoteContentForLayerContextWithId:(unsigned long long)a0 style:(id)a1 tag:(id)a2;
- (void)removeContentForStyle:(id)a0 tag:(id)a1;
- (void).cxx_destruct;

@end
