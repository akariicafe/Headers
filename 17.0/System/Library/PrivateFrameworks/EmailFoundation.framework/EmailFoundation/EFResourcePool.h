@class EFQueue, NSMutableSet;

@interface EFResourcePool : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _handleResourceLock;
}

@property (nonatomic) unsigned long long uncreatedResourcesCount;
@property (readonly, nonatomic) EFQueue *activeResources;
@property (readonly, nonatomic) NSMutableSet *inactiveResources;

- (void)releaseResource:(id)a0;
- (id)initWithCount:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)acquireResource;

@end
