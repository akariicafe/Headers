@class NSString, NSNumber;

@interface ICRadioLibraryArtistContentReference : ICRadioContentReference <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *artistName;
@property (copy, nonatomic) NSNumber *representativeCloudIdentifier;
@property (copy, nonatomic) NSNumber *storeIdentifier;

- (long long)contentType;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)matchDictionaryWithSubscriptionStatus:(id)a0;
- (id)rawContentDictionaryWithSubscriptionStatus:(id)a0;

@end
