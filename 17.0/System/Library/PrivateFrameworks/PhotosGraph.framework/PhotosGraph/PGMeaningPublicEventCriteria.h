@class NSString;

@interface PGMeaningPublicEventCriteria : NSObject <PGMeaningCriteria>

@property (retain, nonatomic) NSString *publicEventCategoryNameString;
@property (retain, nonatomic) NSString *publicEventCategory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_publicEventCategoryForPublicEventCategoryName:(id)a0;
+ (id)criteriaKey;
+ (id)criteriaWithDictionary:(id)a0;

- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)passesForAssets:(id)a0;
- (BOOL)passesForMomentNode:(id)a0 momentNodeCache:(id)a1;

@end
