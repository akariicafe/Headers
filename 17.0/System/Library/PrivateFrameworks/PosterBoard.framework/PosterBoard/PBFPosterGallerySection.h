@class NSString, NSArray;

@interface PBFPosterGallerySection : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedSubtitle;
@property (readonly, copy, nonatomic) NSString *localizedDescriptiveText;
@property (readonly, copy, nonatomic) NSString *symbolImageName;
@property (readonly, copy, nonatomic) NSString *symbolColorName;
@property (readonly, copy, nonatomic) NSString *unityDescription;
@property (readonly, copy, nonatomic) NSArray *items;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProactiveRepresentation:(id)a0;
- (id)initWithType:(long long)a0 localizedTitle:(id)a1 localizedSubtitle:(id)a2 localizedDescriptiveText:(id)a3 symbolImageName:(id)a4 symbolColorName:(id)a5 unityDescription:(id)a6 items:(id)a7;
- (id)proactiveRepresentation;

@end
