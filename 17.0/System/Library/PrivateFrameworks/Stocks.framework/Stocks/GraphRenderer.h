@class NSObject;
@protocol OS_dispatch_queue;

@interface GraphRenderer : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _cancelled;
}

+ (void)clearSharedRenderer;
+ (id)sharedRenderer;

- (id)init;
- (void).cxx_destruct;
- (void)performRenderOperation:(id)a0;

@end
