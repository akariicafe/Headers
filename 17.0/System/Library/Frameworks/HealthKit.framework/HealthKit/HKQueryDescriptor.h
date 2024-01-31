@class NSPredicate, _HKFilter, HKSampleType;

@interface HKQueryDescriptor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_filter) _HKFilter *filter;
@property (readonly, copy, nonatomic) HKSampleType *sampleType;
@property (readonly, copy, nonatomic) NSPredicate *predicate;

+ (id)medicalRecordDescriptionsWithPredicate:(id)a0 futureMigrationsEnabled:(BOOL)a1;
+ (id)allergiesDescriptions;
+ (id)allergiesDescriptionsWithPredicate:(id)a0;
+ (id)clinicalNotesDescriptions;
+ (id)clinicalNotesDescriptionsWithPredicate:(id)a0;
+ (id)conditionsDescriptions;
+ (id)conditionsDescriptionsWithPredicate:(id)a0;
+ (id)coverageDescriptions;
+ (id)coverageDescriptionsWithPredicate:(id)a0;
+ (id)immunizationsDescriptions;
+ (id)immunizationsDescriptionsWithPredicate:(id)a0;
+ (id)labsDescriptions;
+ (id)labsDescriptionsWithPredicate:(id)a0;
+ (id)medicationsDescriptions;
+ (id)medicationsDescriptionsWithPredicate:(id)a0;
+ (id)proceduresDescriptions;
+ (id)proceduresDescriptionsWithPredicate:(id)a0;
+ (id)queryDescriptorWithSampleType:(id)a0;
+ (id)queryDescriptorWithSampleType:(id)a0 predicate:(id)a1;
+ (id)vitalsDescriptions;
+ (id)vitalsDescriptionsWithPredicate:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSampleType:(id)a0 predicate:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
