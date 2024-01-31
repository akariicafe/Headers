@class NSArray;

@interface BWSubjectRelightingInferences : NSObject

@property (retain, nonatomic) struct __CVBuffer { } *skinMask;
@property (retain, nonatomic) struct __CVBuffer { } *personMask;
@property (retain, nonatomic) NSArray *lowResPersonInstanceMasks;
@property (retain, nonatomic) NSArray *lowResPersonInstanceConfidences;
@property (retain, nonatomic) NSArray *lowResPersonInstanceBoundingBoxes;
@property (retain, nonatomic) NSArray *skinToneClassificationsForFaces;

- (void)dealloc;

@end
