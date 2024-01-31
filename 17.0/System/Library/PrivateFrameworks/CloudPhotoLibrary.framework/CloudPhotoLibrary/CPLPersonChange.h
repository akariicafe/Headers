@class NSData, NSString, NSDictionary;

@interface CPLPersonChange : CPLRecordChange <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *contactDescriptor;
@property (copy, nonatomic) NSString *fullName;
@property (nonatomic) long long personType;
@property (nonatomic) long long manualSortOrder;
@property (nonatomic) long long assetSortOrder;
@property (copy, nonatomic) NSDictionary *contactMatchingDictionary;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) long long verifiedType;
@property (nonatomic) short detectionType;
@property (copy, nonatomic) NSString *mergeTargetPersonIdentifier;

+ (BOOL)supportsDeletion;
+ (BOOL)cplShouldIgnorePropertyForCoding:(id)a0;
+ (BOOL)supportsDirectDeletion;
+ (BOOL)serverSupportsAssetSortOrder;
+ (BOOL)serverSupportsDetectionType;
+ (BOOL)serverSupportsGraphPeopleHome;
+ (BOOL)serverSupportsMergeTargetRef;
+ (BOOL)cplShouldIgnorePropertyForEquality:(id)a0;
+ (Class)relatedRecordClass;

- (void).cxx_destruct;
- (id)mergeTargetPersonScopedIdentifier;
- (id)relatedIdentifier;
- (void)setMergeTargetPersonScopedIdentifier:(id)a0;
- (void)setRelatedIdentifier:(id)a0;
- (BOOL)validateRecordForTracker:(id)a0;

@end
