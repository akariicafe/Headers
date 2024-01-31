@class NSArray;

@interface VGFrameSelectorOptions : NSObject

@property (nonatomic) float frameAngularLimit;
@property (nonatomic) BOOL detectFrontPose;
@property (retain, nonatomic) NSArray *frontExpressionFilters;
@property (retain, nonatomic) NSArray *angles;
@property (nonatomic) BOOL useSimpleSelector;
@property (nonatomic) float simpleSelectorMinOffsetAngle;
@property (nonatomic) float simpleSelectorMaxOffsetAngle;

- (void).cxx_destruct;

@end
