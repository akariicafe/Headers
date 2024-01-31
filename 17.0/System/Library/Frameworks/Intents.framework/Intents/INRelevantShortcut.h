@class NSString, INShortcut, NSArray, INDefaultCardTemplate, INImage;

@interface INRelevantShortcut : NSObject <INKeyImageProducing, INImageProxyInjecting, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) INImage *_keyImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) INShortcut *shortcut;
@property (copy, nonatomic) NSArray *relevanceProviders;
@property (copy, nonatomic) INDefaultCardTemplate *watchTemplate;
@property (copy, nonatomic) NSString *widgetKind;
@property (nonatomic) long long shortcutRole;

- (long long)_compareSubProducerOne:(id)a0 subProducerTwo:(id)a1;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithShortcut:(id)a0;

@end
