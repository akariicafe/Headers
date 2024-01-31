@class NSArray;

@interface CMIStyleEngineConfiguration : NSObject

@property (nonatomic) struct CGSize { double width; double height; } thumbnailSize;
@property (nonatomic) unsigned long long linearSystemType;
@property (nonatomic) unsigned long long linearSystemOrder;
@property (nonatomic) unsigned long long linearSystemSolver;
@property (nonatomic) BOOL applyResidualCorrection;
@property (nonatomic) BOOL inputIsLinear;
@property (nonatomic) BOOL outputShouldBeLinear;
@property (nonatomic) BOOL inputThumbnailIsLinear;
@property (nonatomic) BOOL targetThumbnailIsLinear;
@property (retain, nonatomic) NSArray *linearSystemPriorMatrix;

- (void).cxx_destruct;

@end
