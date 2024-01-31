@interface ASCEmptyOfferMetadata : ASCOfferMetadata

+ (BOOL)supportsSecureCoding;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEmpty;

@end
