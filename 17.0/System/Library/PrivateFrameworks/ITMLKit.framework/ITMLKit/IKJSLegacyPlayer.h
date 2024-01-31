@class NSString, IKDOMElement;
@protocol IKJSPlayerAppBridge;

@interface IKJSLegacyPlayer : IKJSObject <NSObject, IKJSLegacyPlayer, _IKJSLegacyPlayerProxy, _IKJSLegacyPlayer>

@property (weak, nonatomic) id<IKJSPlayerAppBridge> appBridge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) IKDOMElement *currentAVMediaElement;

- (void).cxx_destruct;
- (id)asPrivateIKJSLegacyPlayer;

@end
