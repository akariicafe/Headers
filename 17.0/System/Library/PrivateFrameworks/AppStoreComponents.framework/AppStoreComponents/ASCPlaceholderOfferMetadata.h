@interface ASCPlaceholderOfferMetadata : ASCOfferMetadata

+ (BOOL)supportsSecureCoding;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isPlaceholder;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
