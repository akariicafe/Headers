@class NSObject;
@protocol OS_dispatch_group;

@interface _PFRequestExecutor : NSObject {
    NSObject<OS_dispatch_group> *_requestGroup;
}

- (BOOL)wait;
- (id)init;
- (void)dealloc;
- (BOOL)executeRequest:(id)a0 inContext:(id)a1 error:(id *)a2;
- (void)requestFinished;
- (BOOL)executeRequest:(id)a0 onMirroringDelegate:(id)a1 error:(id *)a2;

@end
