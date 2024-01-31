@class NSSet;

@interface NTKUpNextDisabledDataSourcesEditOption : NTKEditOption

@property (readonly, nonatomic) NSSet *disabledBundleIdentifiers;

+ (BOOL)supportsSecureCoding;
+ (id)optionWithDisabledDataSourceIdentifiers:(id)a0 forDevice:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)localizedName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)JSONObjectRepresentation;
- (id)_alphabeticallySortedIdentifiers;
- (id)dailySnapshotKey;
- (id)initWithDisabledDataSourceIdentifiers:(id)a0 forDevice:(id)a1;
- (id)initWithJSONObjectRepresentation:(id)a0 forDevice:(id)a1;
- (BOOL)isValidOption;

@end
