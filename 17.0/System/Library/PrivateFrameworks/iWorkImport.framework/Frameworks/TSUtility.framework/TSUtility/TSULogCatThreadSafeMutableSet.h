@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TSULogCatThreadSafeMutableSet : NSObject {
    NSMutableSet *_objects;
    NSObject<OS_dispatch_queue> *_logCatQueue;
}

- (id)init;
- (BOOL)containsObject:(id)a0;
- (unsigned long long)count;
- (id)allObjects;
- (id)description;
- (void).cxx_destruct;
- (void)removeObject:(id)a0;
- (id)initWithArray:(id)a0;
- (void)addObject:(id)a0;
- (id)immutableSet;

@end
