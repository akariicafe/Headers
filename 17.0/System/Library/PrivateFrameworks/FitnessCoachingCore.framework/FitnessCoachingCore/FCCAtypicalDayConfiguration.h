@class NSString, NSArray, FCCPercentageOfDayRule;

@interface FCCAtypicalDayConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double minimumAheadPercentage;
@property (readonly, nonatomic) double minimumBehindPercentage;
@property (readonly, nonatomic) FCCPercentageOfDayRule *percentageOfDayRule;
@property (readonly, copy, nonatomic) NSArray *allowedGoalTypes;

- (id)transportData;
- (id)initWithTransportData:(id)a0;
- (id)description;
- (id)protobuf;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (id)initWithIdentifier:(id)a0 minimumAheadPercentage:(double)a1 minimumBehindPercentage:(double)a2 percentageOfDayRule:(id)a3 allowedGoalTypes:(id)a4;

@end
