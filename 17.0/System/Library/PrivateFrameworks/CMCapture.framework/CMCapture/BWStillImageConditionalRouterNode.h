@class BWStillImageConditionalRouterConfiguration;

@interface BWStillImageConditionalRouterNode : BWFanOutNode {
    BWStillImageConditionalRouterConfiguration *_configuration;
}

+ (void)initialize;

- (void)handleNodeError:(id)a0 forInput:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)initWithRoutingConfiguration:(id)a0;

@end
