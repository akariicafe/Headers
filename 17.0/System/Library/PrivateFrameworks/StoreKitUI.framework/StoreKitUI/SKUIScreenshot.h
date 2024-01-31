@class NSString, NSMutableDictionary;

@interface SKUIScreenshot : NSObject <NSCopying, SKUICacheCoding> {
    NSMutableDictionary *_urls;
    NSMutableDictionary *_sizes;
    NSString *_urlTemplate;
}

@property (readonly, nonatomic) long long numberOfVariants;
@property (readonly, nonatomic) NSString *orientationString;
@property (readonly, nonatomic) long long uniqueIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCacheRepresentation:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForVariant:(id)a0;
- (id)URLForVariant:(id)a0;
- (void)_addURLsFromDictionary:(id)a0 withRemoteLocalKeysMap:(id)a1;
- (id)_firstVariant;
- (id)_initSKUIScreenshot;
- (id)initWithScreenshotDictionary:(id)a0;
- (void)setArtwork:(id)a0 forVariant:(id)a1;

@end
