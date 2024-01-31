@class NSDictionary, NSString;
@protocol NURenderStatistics;

@interface _PISliderNetAdjustmentsResult : _NURenderResult <PISliderNetAdjustmentsResult>

@property (copy) NSDictionary *adjustments;
@property float similarityScore;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
