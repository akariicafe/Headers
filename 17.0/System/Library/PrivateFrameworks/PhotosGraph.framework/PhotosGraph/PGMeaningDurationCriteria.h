@class NSString;

@interface PGMeaningDurationCriteria : NSObject <PGMeaningCriteria>

@property (nonatomic) unsigned long long minimumDuration;
@property (nonatomic) BOOL includeRoutineVisitsInDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)a0;

@end
