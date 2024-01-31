@class NSString, NSArray, FCCPercentageOfDayRule;

@interface FCCCompletionOffTrackConfiguration : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) double goalBufferPercentage;
@property (readonly, copy, nonatomic) NSArray *coalescingRules;
@property (readonly, nonatomic) FCCPercentageOfDayRule *percentageOfDayRule;
@property (readonly, copy, nonatomic) NSArray *allowedGoalTypes;

- (id)transportData;
- (id)initWithTransportData:(id)a0;
- (id)initWithIdentifier:(id)a0 goalBufferPercentage:(double)a1 coalescingRules:(id)a2 percentageOfDayRule:(id)a3 allowedGoalTypes:(id)a4;
- (id)description;
- (id)protobuf;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;

@end
