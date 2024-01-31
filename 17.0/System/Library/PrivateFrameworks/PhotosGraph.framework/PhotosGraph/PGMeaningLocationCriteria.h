@class NSString;

@interface PGMeaningLocationCriteria : NSObject <PGMeaningCriteria>

@property (nonatomic) BOOL excludeFrequentLocations;
@property (nonatomic) BOOL excludeHomeWorkLocations;
@property (nonatomic) BOOL includeHomeLocations;
@property (nonatomic) BOOL includeWorkLocations;
@property (nonatomic) BOOL includeFrequentLocations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)a0;

@end
