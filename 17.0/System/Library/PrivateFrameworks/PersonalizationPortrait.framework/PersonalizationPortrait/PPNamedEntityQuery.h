@class NSString, NSSet, NSDate;

@interface PPNamedEntityQuery : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *matchingEntityTrie;
@property (nonatomic) unsigned long long locationConsumer;
@property (nonatomic) BOOL orderByName;
@property (nonatomic) BOOL orderByAscendingDate;
@property (nonatomic) BOOL removeNearDuplicates;
@property (nonatomic) BOOL isForRecordMonitoring;
@property (nonatomic) BOOL filterByRelevanceDate;
@property (nonatomic) unsigned long long limit;
@property (retain, nonatomic) NSDate *fromDate;
@property (retain, nonatomic) NSDate *toDate;
@property (retain, nonatomic) NSDate *scoringDate;
@property (retain, nonatomic) NSSet *matchingSourceBundleIds;
@property (retain, nonatomic) NSSet *excludingSourceBundleIds;
@property (retain, nonatomic) NSSet *matchingSourceGroupIds;
@property (retain, nonatomic) NSSet *matchingSourceDocumentIds;
@property (nonatomic) unsigned long long deviceFilter;
@property (nonatomic) BOOL overrideDecayRate;
@property (nonatomic) double decayRate;
@property (copy, nonatomic) NSString *matchingName;
@property (copy, nonatomic) NSSet *matchingNames;
@property (nonatomic) BOOL matchCategory;
@property (retain, nonatomic) NSSet *matchingCategories;
@property (retain, nonatomic) NSSet *excludingAlgorithms;
@property (nonatomic) BOOL excludeWithoutSentiment;
@property (retain, nonatomic) NSString *matchingContactHandle;

+ (id)_matchingCategoriesDescription:(id)a0;
+ (id)_excludingAlgorithmsDescription:(id)a0;
+ (id)locationQueryWithLimit:(unsigned long long)a0 fromDate:(id)a1 consumerType:(unsigned long long)a2;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqualToNamedEntityQuery:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyForMonitoring;
- (BOOL)isEqual:(id)a0;
- (id)customizedDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
