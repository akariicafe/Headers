@interface IDSDestinationDefaultPairedDevice : IDSDestination

+ (BOOL)supportsSecureCoding;

- (id)destinationURIs;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToIDSDestinationDefaultPairedDevice:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
