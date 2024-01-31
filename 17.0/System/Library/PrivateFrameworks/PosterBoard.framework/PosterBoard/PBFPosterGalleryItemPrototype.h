@class NSString, PBFPosterGalleryItemOptions;

@interface PBFPosterGalleryItemPrototype : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *containerBundleIdentifier;
@property (readonly, copy, nonatomic) PBFPosterGalleryItemOptions *galleryOptions;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 extensionBundleIdentifier:(id)a1 containerBundleIdentifier:(id)a2 galleryOptions:(id)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProactiveRepresentation:(id)a0;
- (id)proactiveRepresentation;

@end
