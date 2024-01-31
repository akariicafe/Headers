@class NSArray, NSDictionary, LNBundleMetadataGeneratorDescription, NSString;

@interface LNBundleMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) long long latestMetadataVersion;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *actions;
@property (readonly, copy, nonatomic) NSDictionary *entities;
@property (readonly, copy, nonatomic) NSDictionary *queries;
@property (readonly, copy, nonatomic) NSDictionary *enums;
@property (readonly, nonatomic) long long version;
@property (readonly, copy, nonatomic) LNBundleMetadataGeneratorDescription *generator;
@property (readonly, copy, nonatomic) NSArray *autoShortcuts;
@property (readonly, nonatomic) long long shortcutTileColor;
@property (readonly, copy, nonatomic) NSString *autoShortcutProviderMangledName;
@property (readonly, copy, nonatomic) NSArray *negativePhrases;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)verboseDescription;
- (id)description;
- (void).cxx_destruct;
- (id)initWithArray:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithMetadataFileURL:(id)a0 bundleURL:(id)a1 effectiveBundleIdentifier:(id)a2 error:(id *)a3;
- (void)applyAttributionBundleIdentifier:(id)a0;
- (id)initWithActions:(id)a0 entities:(id)a1 queries:(id)a2 enums:(id)a3;
- (id)initWithActions:(id)a0 entities:(id)a1 queries:(id)a2 enums:(id)a3 autoShortcutProviderMangledName:(id)a4 autoShortcuts:(id)a5 shortcutTileColor:(long long)a6 version:(long long)a7 generator:(id)a8;
- (id)initWithActions:(id)a0 entities:(id)a1 queries:(id)a2 enums:(id)a3 autoShortcutProviderMangledName:(id)a4 autoShortcuts:(id)a5 shortcutTileColor:(long long)a6 version:(long long)a7 generator:(id)a8 negativePhrases:(id)a9;
- (id)initWithActions:(id)a0 entities:(id)a1 queries:(id)a2 enums:(id)a3 autoShortcutProviderMangledName:(id)a4 autoShortcuts:(id)a5 version:(long long)a6 generator:(id)a7;
- (id)initWithActions:(id)a0 entities:(id)a1 queries:(id)a2 enums:(id)a3 autoShortcuts:(id)a4 version:(long long)a5 generator:(id)a6;
- (id)initWithActions:(id)a0 entities:(id)a1 queries:(id)a2 enums:(id)a3 version:(long long)a4;
- (id)initWithActions:(id)a0 entities:(id)a1 queries:(id)a2 enums:(id)a3 version:(long long)a4 generator:(id)a5;
- (id)initWithBundle:(id)a0 usingEffectiveBundleIdentifier:(id)a1 error:(id *)a2;
- (id)initWithMetadataFileURL:(id)a0 bundleURL:(id)a1 effectiveBundleIdentifier:(id)a2 error:(id *)a3;

@end
