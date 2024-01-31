@interface _NSFileProviderEmptyItemVersion : NSFileProviderItemVersion

+ (BOOL)supportsSecureCoding;
+ (id)emptyVersion;

- (id)init;
- (id)contentVersion;
- (id)metadataVersion;
- (id)initWithCoder:(id)a0;

@end
