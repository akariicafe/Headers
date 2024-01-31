@class NSString, NSValue, NSDictionary;

@interface CRCarPlayCapabilities : NSObject <NSSecureCoding>

@property (class, copy, nonatomic) NSString *capabilitiesIdentifier;
@property (class, copy, nonatomic) NSString *capabilitiesVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *version;
@property (nonatomic) BOOL persisted;
@property (nonatomic) unsigned long long disabledFeature;
@property (nonatomic) long long nowPlayingAlbumArtMode;
@property (retain, nonatomic) NSValue *viewAreaInsets;
@property (retain, nonatomic) NSValue *dashboardRoundedCorners;
@property (nonatomic) long long userInterfaceStyle;
@property (copy, nonatomic) NSDictionary *userInfo;

+ (id)carPlayCapabilitiesCache;
+ (void)waitForCarCapabilitiesValuesWithReply:(id /* block */)a0;
+ (void)_resetCapabilitiesGlobalDomain;
+ (id)fetchCarCapabilities;
+ (id)newCapabilitiesFromGlobalDomain;
+ (void)setCarPlayCapabilitiesCache:(id)a0;
+ (void)invalidateCarPlayCapabilitiesCache;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isEqualToCapabilities:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)informativeText;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVersion:(id)a0;
- (void)persistCapabilitiesToGlobalDomain;

@end
