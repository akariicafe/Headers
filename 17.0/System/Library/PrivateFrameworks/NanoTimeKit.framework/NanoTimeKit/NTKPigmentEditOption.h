@class NSNumber, NSBundle, NSString;

@interface NTKPigmentEditOption : NTKEditOption <NSCopying, NTKPigmentEditOptionConvertible, NSSecureCoding> {
    NSString *_localizedName;
    NSString *_localizedCollectionName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isFromStore) BOOL fromStore;
@property (nonatomic) BOOL isSensitiveUI;
@property (nonatomic) BOOL isAddable;
@property (nonatomic) BOOL supportsSlider;
@property (nonatomic) BOOL sortedByHue;
@property (copy, nonatomic) NSNumber *desiredPosition;
@property (readonly, nonatomic) NSBundle *mainBundle;
@property (retain, nonatomic) NSString *bundlePrincipalClassName;
@property (retain, nonatomic) NSBundle *sourceBundle;
@property (nonatomic) BOOL loadedBundleFromClass;
@property (retain, nonatomic) NSString *alternativeLocalizedStringTableName;
@property (retain, nonatomic) NSString *fullname;
@property (retain, nonatomic) NSString *effectiveOptionName;
@property (retain, nonatomic) NSString *effectiveCollectionName;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSString *optionName;
@property (readonly, nonatomic) NSString *collectionName;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isVisible;
@property (readonly, nonatomic) double colorFraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultFraction;
+ (id)duotoneNameWithName:(id)a0 otherName:(id)a1;
+ (void)effectiveNamesFromName:(id)a0 effectiveCollectionName:(inout id *)a1 effectiveOptionName:(inout id *)a2;
+ (id)fullnameWithCollectionName:(id)a0 optionName:(id)a1;
+ (BOOL)hasInlineCollectionInOptionName:(id)a0;
+ (BOOL)isMultitoneOptionWithOptionName:(id)a0;
+ (id)legacyOptionWithPigmentEditOption:(id)a0 forDevice:(id)a1;
+ (id)multitoneColorNames:(id)a0;
+ (id)multitonePigmentAtIndex:(unsigned long long)a0 forColorName:(id)a1 groupName:(id)a2;
+ (void)parseFullname:(id)a0 collectionName:(inout id *)a1 optionName:(inout id *)a2 fraction:(double *)a3;
+ (void)parserIdentifier:(id)a0 collectionName:(id *)a1 optionName:(id *)a2 colorFraction:(double *)a3 separator:(id)a4;
+ (id)pigmentNamed:(id)a0;

- (id)uniqueName;
- (void)encodeWithCoder:(id)a0;
- (id)json;
- (id)localizedName;
- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)JSONObjectRepresentationForFace:(id)a0;
- (id)multitoneNamesWithoutCollection;
- (id)JSONObjectRepresentation;
- (id)_buildFullname;
- (id)_resolveBundleWithBundlePrincipalClassName:(id)a0;
- (id)copyWithCollectionOverride:(id)a0;
- (id)copyWithColorFraction:(double)a0;
- (id)dailySnapshotKey;
- (void)extractEffectiveCollectionName:(inout id *)a0 effectiveOptionName:(inout id *)a1;
- (id)fullnameIncludingFraction;
- (id)initWithFullname:(id)a0;
- (id)initWithJSONObjectRepresentation:(id)a0 forDevice:(id)a1;
- (id)initWithOptionName:(id)a0 collectionName:(id)a1;
- (id)initWithOptionName:(id)a0 collectionName:(id)a1 colorFraction:(double)a2;
- (id)initWithProtoBuffer:(id)a0;
- (BOOL)isEqualIgnoringFraction:(id)a0;
- (BOOL)isEquivalentToOption:(id)a0;
- (BOOL)isMultiColor;
- (BOOL)isMultitoneOption;
- (BOOL)isPrideOption;
- (BOOL)isRainbowColor;
- (BOOL)isValidOption;
- (BOOL)isWhiteColor;
- (id)legacyJSONRepresentationForFace:(id)a0;
- (void)loadEffectiveNames;
- (id)localizationTableNames;
- (id)localizedCollectionName;
- (id)localizedNameForKey:(id)a0;
- (id)localizedNameForKey:(id)a0 fromTable:(id)a1 separatorString:(id)a2;
- (id)localizedNameForKey:(id)a0 table:(id)a1;
- (id)pigmentEditOption;
- (id)protoBuffer;
- (long long)swatchStyle;

@end
