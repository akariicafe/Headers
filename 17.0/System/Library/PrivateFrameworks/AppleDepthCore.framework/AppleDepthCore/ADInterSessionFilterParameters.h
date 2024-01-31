@interface ADInterSessionFilterParameters : NSObject

@property (nonatomic) unsigned int minimalEntriesForResult;
@property (nonatomic) unsigned int capacity;
@property (nonatomic) float minimalWeight;
@property (nonatomic) float maximalWeight;
@property (nonatomic) unsigned int outlierNumber;
@property (nonatomic) float outlierWeight;
@property (nonatomic) BOOL isStepDetectionActive;
@property (nonatomic) unsigned int minStepIndex;
@property (nonatomic) unsigned int minStepSize;
@property (nonatomic) float stepDetectionThreshold;

- (id)init;

@end
