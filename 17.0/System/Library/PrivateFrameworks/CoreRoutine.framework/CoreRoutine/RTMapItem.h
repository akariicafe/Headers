@class RTLocation, NSUUID, RTAddress, RTMapItemExtendedAttributes, NSDate, NSData, NSString;

@interface RTMapItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) RTMapItemExtendedAttributes *extendedAttributes;
@property (nonatomic) unsigned long long source;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) double weight;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSData *geoMapItemHandle;
@property (readonly, nonatomic) RTAddress *address;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) long long resultProviderID;
@property (readonly, nonatomic) RTLocation *location;
@property (readonly, copy, nonatomic) NSString *displayLanguage;
@property (readonly, nonatomic) BOOL disputed;

+ (id)sourceToString:(unsigned long long)a0;
+ (BOOL)hasKnownTypeItem:(id)a0;
+ (double)weightForExtendedAttributes:(id)a0;
+ (double)weightForSource:(unsigned long long)a0;

- (BOOL)isEqualToMapItem:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2 address:(id)a3 location:(id)a4 source:(unsigned long long)a5 muid:(unsigned long long)a6 resultProviderID:(long long)a7 geoMapItemHandle:(id)a8 creationDate:(id)a9 expirationDate:(id)a10 extendedAttributes:(id)a11 displayLanguage:(id)a12 disputed:(BOOL)a13;
- (void)updateWeightWithSource:(unsigned long long)a0 extendedAttributes:(id)a1;
- (BOOL)validMUID;

@end
