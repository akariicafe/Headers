@class NSArray, NSFileProviderSearchQuery;

@interface FPEnumerationSettings : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *sortDescriptors;
@property (copy) NSFileProviderSearchQuery *searchQuery;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
