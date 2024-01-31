@class AVPublisher;

@interface AVMapPublisher : AVPublisher {
    AVPublisher *_upstream;
    id /* block */ _transform;
}

+ (id)mapPublisherWithUpstream:(id)a0 transform:(id /* block */)a1;

- (void)dealloc;
- (id)description;
- (id)initWithUpstream:(id)a0 transform:(id /* block */)a1;
- (id)subscribeRequestingInitialValue:(BOOL)a0 block:(id /* block */)a1;

@end
