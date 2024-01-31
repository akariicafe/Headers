@class NSString;

@interface PGMeaningInterestingnessCriteria : NSObject <PGMeaningCriteria>

@property (nonatomic) BOOL mustBeInteresting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)a0;

@end
