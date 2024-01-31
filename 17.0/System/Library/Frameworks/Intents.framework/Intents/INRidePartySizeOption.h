@class NSString, INPriceRange;

@interface INRidePartySizeOption : NSObject <INRidePartySizeOptionExport, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } partySizeRange;
@property (readonly, nonatomic) NSString *sizeDescription;
@property (readonly, nonatomic) INPriceRange *priceRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPartySizeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 sizeDescription:(id)a1 priceRange:(id)a2;

@end
