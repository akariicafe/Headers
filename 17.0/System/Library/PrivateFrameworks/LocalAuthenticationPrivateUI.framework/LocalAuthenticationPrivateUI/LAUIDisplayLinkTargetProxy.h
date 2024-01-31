@class LAUIRenderLoop;

@interface LAUIDisplayLinkTargetProxy : NSObject {
    LAUIRenderLoop *_target;
}

- (id)init;
- (void).cxx_destruct;
- (void)drawWithDisplayLink:(id)a0;

@end
