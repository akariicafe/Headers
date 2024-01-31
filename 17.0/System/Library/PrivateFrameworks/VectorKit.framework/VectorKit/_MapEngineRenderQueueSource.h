@class NSString;

@interface _MapEngineRenderQueueSource : NSObject <GGLRenderQueueSource> {
    void *_mapEngine;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDelayedRenderQueueConsumptionSupported;
- (id)initWithEngine:(void *)a0;
- (void *)renderQueueForTimestamp:(double)a0;

@end
