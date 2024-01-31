@class NSString, NSMutableDictionary;

@interface ASOOverlayAppConfiguration : NSObject <NSSecureCoding, ASOOverlayConfiguration>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSMutableDictionary *storage;
@property (retain, nonatomic) NSString *appIdentifier;
@property (retain, nonatomic) NSString *campaignToken;
@property (retain, nonatomic) NSString *providerToken;
@property (nonatomic) long long position;
@property (nonatomic) BOOL userDismissible;
@property (nonatomic) BOOL userDismissable;
@property (retain, nonatomic) NSString *latestReleaseID;
@property (copy, nonatomic) NSString *productVariantID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStorage:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAppIdentifier:(id)a0 position:(long long)a1;
- (id)additionalValueForKey:(id)a0;
- (void)setAdditionalValue:(id)a0 forKey:(id)a1;

@end
