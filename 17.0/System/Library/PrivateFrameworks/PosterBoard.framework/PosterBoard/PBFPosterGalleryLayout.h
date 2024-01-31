@class NSArray, NSLocale;

@interface PBFPosterGalleryLayout : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) long long source;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSections:(id)a0 locale:(id)a1 source:(long long)a2;
- (id)initWithProactiveRepresentation:(id)a0;
- (id)initWithSections:(id)a0 locale:(id)a1;
- (id)proactiveRepresentation;

@end
