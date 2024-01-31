@class NSString, SKUIAnimatorDOMFeature;

@interface SKUITextInputViewElement : SKUIInputViewElement

@property (readonly, nonatomic) SKUIAnimatorDOMFeature *animationInterface;
@property (readonly, nonatomic) long long keyboardType;
@property (readonly, nonatomic) long long maximumLength;
@property (readonly, nonatomic) NSString *placeholderText;
@property (readonly, nonatomic, getter=isSecure) BOOL secure;

+ (id)supportedFeatures;
+ (BOOL)isTextInputType:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)elementType;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
