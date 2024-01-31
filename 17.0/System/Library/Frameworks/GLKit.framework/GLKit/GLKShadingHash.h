@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GLKShadingHash : NSObject {
    NSObject<OS_dispatch_queue> *_vshQueue;
    NSObject<OS_dispatch_queue> *_fshQueue;
    NSMutableDictionary *_compiledVshs;
    NSMutableDictionary *_compiledFshs;
}

- (id)init;
- (void)dealloc;
- (void)purgeAllShaders;
- (id)compiledFshForKey:(id)a0;
- (id)compiledVshForKey:(id)a0;
- (void)setCompiledFsh:(id)a0 forKey:(id)a1;
- (void)setCompiledVsh:(id)a0 forKey:(id)a1;

@end
