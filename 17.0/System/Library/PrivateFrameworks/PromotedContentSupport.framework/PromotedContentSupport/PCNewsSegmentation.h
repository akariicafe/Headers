@class NSNumber;

@interface PCNewsSegmentation : NSObject

@property (class, readonly, nonatomic) NSNumber *ageGroup;
@property (class, readonly, nonatomic) NSNumber *gender;

+ (id)segmentData;
+ (void)_updateGenderAndAgeGroupValues;
+ (void)addClientToSegments:(id)a0 replaceExisting:(BOOL)a1 privateSegment:(BOOL)a2;
+ (id)_classProperties;

@end
