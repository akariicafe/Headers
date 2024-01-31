@class NSString;

@interface MUUnratedCategoryRatingViewModel : NSObject <MURatingPercentageViewModel> {
    long long _countAdjustment;
}

@property (readonly, nonatomic) NSString *categoryTitle;
@property (readonly, nonatomic) unsigned long long displayPercentage;
@property (readonly, nonatomic) double score;
@property (readonly, nonatomic) double maxScore;
@property (readonly, nonatomic) unsigned long long numberOfRatingsUsedForScore;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasPercentage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
