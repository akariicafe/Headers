@class NSString, NSDictionary, NSURL, NSData;

@interface MDSearchableItem : CSSearchableItem

@property (retain) NSDictionary *attributes;
@property (copy) NSString *displayName;
@property (copy) NSString *secondaryDisplayName;
@property (copy) NSString *contentUTI;
@property (copy) NSURL *contentURL;
@property (copy) NSURL *thumbnailURL;
@property (copy) NSData *thumbnailImageData;
@property (readonly, copy) NSString *localizedDisplayName;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_standardizeDeprecatedProperties:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 domainIdentifier:(id)a1 attributes:(id)a2;

@end
