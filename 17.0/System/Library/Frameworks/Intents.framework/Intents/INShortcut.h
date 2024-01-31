@class INIntent, NSArray, NSString, NSData, NSUserActivity, INImage;

@interface INShortcut : NSObject <INKeyImageProducing, NSItemProviderReading, NSItemProviderWriting, INImageProxyInjecting, NSSecureCoding, NSCopying>

@property (class, readonly, copy, nonatomic) NSArray *readableTypeIdentifiersForItemProvider;
@property (class, readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) INImage *_keyImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (readonly, copy, nonatomic) NSData *activityData;
@property (readonly, copy, nonatomic) INImage *activityImage;
@property (readonly, copy, nonatomic) NSString *activitySubtitle;
@property (readonly, copy, nonatomic) NSString *activityBundleIdentifier;
@property (readonly, nonatomic) NSString *_title;
@property (readonly, nonatomic) NSString *_subtitle;
@property (readonly, nonatomic) NSString *_associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSUserActivity *userActivity;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;
+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)a0;

- (long long)_compareSubProducerOne:(id)a0 subProducerTwo:(id)a1;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUserActivity:(id)a0;
- (void).cxx_destruct;
- (id)initWithIntent:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (id)_initWithIntent:(id)a0;
- (id)initWithActivityData:(id)a0 activityImage:(id)a1 activitySubtitle:(id)a2 activityBundleIdentifier:(id)a3;
- (id)initWithUserActivity:(id)a0 bundleIdentifier:(id)a1;
- (id)shortcutWithActivityBundleIdentifier:(id)a0;
- (id)shortcutWithActivityImage:(id)a0;

@end
