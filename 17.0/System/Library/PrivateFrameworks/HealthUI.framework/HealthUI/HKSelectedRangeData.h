@class UIColor, NSString, NSAttributedString, NSNumber;

@interface HKSelectedRangeData : NSObject

@property (nonatomic) long long statisticsType;
@property (nonatomic) long long dataType;
@property (copy, nonatomic) NSAttributedString *attributedString;
@property (copy, nonatomic) NSString *titleOverride;
@property (copy, nonatomic) NSNumber *valueAsNumber;
@property (copy, nonatomic) UIColor *prefixColor;
@property (nonatomic) BOOL prefersImageAffixes;
@property (copy, nonatomic) id /* block */ titleTapOutBlock;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithStatisticsType:(long long)a0;
- (BOOL)isEqualToSelectedRangeData:(id)a0;

@end
