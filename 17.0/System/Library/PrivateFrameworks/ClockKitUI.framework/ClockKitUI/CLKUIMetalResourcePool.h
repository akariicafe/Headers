@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CLKUIMetalResourcePool : NSObject {
    NSObject<OS_dispatch_queue> *_buffersQueue;
    NSMutableArray *_resourcePool;
    unsigned long long _expectedCountPerFrame;
    id /* block */ _creationBlock;
}

+ (id)bufferPoolWithLength:(unsigned long long)a0 andOptions:(unsigned long long)a1 expectedCountPerFrame:(unsigned long long)a2;
+ (id)texturePoolWithDescriptor:(id)a0 expectedCountPerFrame:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)dequeueReusableResource;
- (id)dequeueReusableResourceForUseOnCommandBuffer:(id)a0;
- (id)initWithCreationBlock:(id /* block */)a0 expectedCountPerFrame:(unsigned long long)a1;
- (void)returnReusableResource:(id)a0;

@end
