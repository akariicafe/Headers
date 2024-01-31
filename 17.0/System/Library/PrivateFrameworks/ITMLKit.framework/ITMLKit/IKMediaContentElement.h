@class IKAppPlayerBridge;

@interface IKMediaContentElement : IKViewElement

@property (readonly, nonatomic) IKAppPlayerBridge *playerBridge;

+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
