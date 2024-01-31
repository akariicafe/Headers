@interface PLProcessExitAggregatorHistogram : NSObject

@property int total;
@property int duration_0_5;
@property int duration_5_10;
@property int duration_10_60;
@property int duration_60_above;
@property int duration_unknown;

- (id)description;

@end
