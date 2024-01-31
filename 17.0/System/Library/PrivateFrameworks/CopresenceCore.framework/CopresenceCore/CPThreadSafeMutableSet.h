@class NSMutableSet;

@interface CPThreadSafeMutableSet : NSObject {
    NSMutableSet *_mutableSet;
}

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } operationLock;

- (id)init;
- (void)unionSet:(id)a0;
- (BOOL)containsObject:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)addObject:(id)a0;

@end
