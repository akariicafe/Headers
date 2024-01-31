@class NSString, NSURL, NSDate;

@interface HKOntologyShardRegistryEntry : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *schemaType;
@property (readonly, nonatomic) long long schemaVersion;
@property (readonly, nonatomic) unsigned long long settings;
@property (readonly, nonatomic) long long slot;
@property (readonly, nonatomic) long long desiredState;
@property (readonly, copy, nonatomic) NSDate *desiredStateDate;
@property (readonly, nonatomic) long long currentVersion;
@property (readonly, copy, nonatomic) NSDate *currentVersionDate;
@property (readonly, copy, nonatomic) NSString *currentRegion;
@property (readonly, copy, nonatomic) NSDate *currentRegionDate;
@property (readonly, copy, nonatomic) NSString *currentLocale;
@property (readonly, copy, nonatomic) NSDate *currentLocaleDate;
@property (readonly, nonatomic) long long availableVersion;
@property (readonly, copy, nonatomic) NSDate *availableVersionDate;
@property (readonly, copy, nonatomic) NSString *availableRegion;
@property (readonly, copy, nonatomic) NSDate *availableRegionDate;
@property (readonly, copy, nonatomic) NSString *availableLocale;
@property (readonly, copy, nonatomic) NSDate *availableLocaleDate;
@property (readonly, copy, nonatomic) NSURL *availableURL;
@property (readonly, copy, nonatomic) NSDate *availableURLDate;
@property (readonly, copy, nonatomic) NSString *availableChecksum;
@property (readonly, copy, nonatomic) NSDate *availableChecksumDate;
@property (readonly, nonatomic) long long availableSize;
@property (readonly, copy, nonatomic) NSDate *availableSizeDate;
@property (readonly, nonatomic) long long availableState;
@property (readonly, copy, nonatomic) NSDate *availableStateDate;

- (id)copyWithAvailableVersion:(long long)a0;
- (id)init;
- (unsigned long long)hash;
- (id)copyWithAvailableStateImported;
- (id)updatedCopyWithAvailableVersion:(long long)a0 availableRegion:(id)a1 availableLocale:(id)a2 availableURL:(id)a3 availableChecksum:(id)a4 availableSize:(long long)a5 date:(id)a6;
- (id)copyWithAvailableStateNotImportedForDate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 schemaType:(id)a1 schemaVersion:(long long)a2 availableVersion:(long long)a3 availableRegion:(id)a4 availableLocale:(id)a5 availableURL:(id)a6 availableChecksum:(id)a7 availableSize:(long long)a8 date:(id)a9;
- (id)copyWithAvailableVersion:(long long)a0 availableState:(long long)a1;
- (BOOL)unitTesting_isIdentical:(id)a0;
- (id)description;
- (id)copyWithDesiredState:(long long)a0;
- (id)initWithIdentifier:(id)a0 schemaType:(id)a1 schemaVersion:(long long)a2 availableVersion:(long long)a3 date:(id)a4;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 schemaType:(id)a1 schemaVersion:(long long)a2 availableURL:(id)a3;
- (id)debugDescription;
- (id)copyWithAvailableState:(long long)a0;
- (id)initWithIdentifier:(id)a0 schemaType:(id)a1 schemaVersion:(long long)a2 settings:(unsigned long long)a3 slot:(long long)a4 desiredState:(long long)a5 desiredStateDate:(id)a6 currentVersion:(long long)a7 currentVersionDate:(id)a8 currentRegion:(id)a9 currentRegionDate:(id)a10 currentLocale:(id)a11 currentLocaleDate:(id)a12 availableVersion:(long long)a13 availableVersionDate:(id)a14 availableRegion:(id)a15 availableRegionDate:(id)a16 availableLocale:(id)a17 availableLocaleDate:(id)a18 availableURL:(id)a19 availableURLDate:(id)a20 availableChecksum:(id)a21 availableChecksumDate:(id)a22 availableSize:(long long)a23 availableSizeDate:(id)a24 availableState:(long long)a25 availableStateDate:(id)a26;
- (BOOL)isEqual:(id)a0;
- (id)copyWithSlot:(long long)a0;
- (id)copyWithCurrentVersionUndeterminedForDate:(id)a0;
- (id)initWithIdentifier:(id)a0 schemaType:(id)a1 schemaVersion:(long long)a2 desiredState:(long long)a3;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
