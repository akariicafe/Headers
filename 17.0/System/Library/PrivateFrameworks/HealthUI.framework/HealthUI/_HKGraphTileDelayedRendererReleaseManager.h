@class NSMutableArray;

@interface _HKGraphTileDelayedRendererReleaseManager : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } entriesLock;
@property (retain, nonatomic) NSMutableArray *delayedEntries;

+ (id)singleton;
+ (void)handleDelayedRendererRelease:(id)a0 lastAssignmentTime:(double)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_hasExpiredEntriesAtTime:(double)a0;
- (void)addRenderForDelayedRelease:(id)a0 lastAssignmentTime:(double)a1;
- (void)releaseExpiredImageRenderers:(double)a0;

@end
