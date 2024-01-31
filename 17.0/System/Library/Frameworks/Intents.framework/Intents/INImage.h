@class NSString, NSData, NSURL;

@interface INImage : NSObject <INJSONSerializable, INKeyImageProducing, INCacheableObject, INImageProxyInjecting, INImageExport, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) INImage *_keyImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *cacheIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL _isEligibleForProxying;
@property (readonly, nonatomic) BOOL _isSupportedForDonation;
@property (copy, nonatomic, setter=_setIdentifier:) NSString *_identifier;
@property (copy, nonatomic, setter=_setImageData:) NSData *_imageData;
@property (copy, nonatomic, setter=_setUri:) NSURL *_uri;
@property (copy, nonatomic, setter=_setName:) NSString *_name;
@property (copy, nonatomic, setter=_setBundlePath:) NSString *_bundlePath;
@property (copy, nonatomic, setter=_setBundleIdentifier:) NSString *_bundleIdentifier;
@property (nonatomic, setter=_setImageSize:) struct { double width; double height; } _imageSize;
@property (nonatomic, setter=_setPreferredScaledSize:) struct { double width; double height; } _preferredScaledSize;
@property (nonatomic, setter=_setRenderingMode:) long long _renderingMode;
@property (readonly, nonatomic, getter=_isSystem) BOOL system;
@property (readonly, nonatomic) BOOL _requiresRetrieval;
@property (copy, nonatomic, setter=_setSandboxExtensionData:) NSData *_sandboxExtensionData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_intents_decodeWithJSONDecoder:(id)a0 codableDescription:(id)a1 from:(id)a2;
+ (id)imageNamed:(id)a0;
+ (id)systemImageNamed:(id)a0;
+ (id)_bundleImageWithURL:(id)a0;
+ (id)_classesInCluster;
+ (void)buildFromCachePayload:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
+ (id)imageWithImageData:(id)a0;
+ (id)imageWithURL:(id)a0;
+ (id)imageWithURL:(id)a0 width:(double)a1 height:(double)a2;
+ (void)registerImageLoadersOnce;

- (long long)_compareSubProducerOne:(id)a0 subProducerTwo:(id)a1;
- (void)_injectProxiesForImages:(id /* block */)a0 completion:(id /* block */)a1;
- (id)_dictionaryRepresentation;
- (id)_copyWithSubclass:(Class)a0;
- (id)init;
- (void)_loadImageDataAndSizeWithHelper:(id)a0 accessSpecifier:(id)a1 completion:(id /* block */)a2;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithData:(id)a0;
- (id)_description;
- (void)_retrieveImageDataWithReply:(id /* block */)a0;
- (id)_initWithIdentifier:(id)a0;
- (id)_intents_readableTitleWithLocalizer:(id)a0 metadata:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_intents_encodeWithJSONEncoder:(id)a0 codableDescription:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_URLRepresentation;
- (id)_descriptionAtIndent:(unsigned long long)a0;
- (id)_in_downscaledImageForFilePersistence;
- (id)_in_writeableFilePersistenceConfigurationForStoreType:(unsigned long long)a0;
- (id)_initWithURLRepresentation:(id)a0;
- (id)_preferredImageLoader;
- (id)_proxiedImageWithError:(id *)a0;
- (void)_requestProxy:(id /* block */)a0;
- (void)generateCachePayloadWithCompletion:(id /* block */)a0;

@end
