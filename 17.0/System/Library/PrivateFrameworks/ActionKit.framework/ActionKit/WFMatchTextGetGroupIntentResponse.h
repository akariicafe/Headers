@class NSArray, NSNumber;

@interface WFMatchTextGetGroupIntentResponse : INIntentResponse

@property (nonatomic) long long code;
@property (copy, nonatomic) NSArray *text;
@property (copy, nonatomic) NSNumber *noMatchIndex;
@property (copy, nonatomic) NSNumber *rangeErrorGroupNumber;
@property (copy, nonatomic) NSNumber *rangeErrorGroupCount;

+ (id)noMatchIntentResponseWithNoMatchIndex:(id)a0;
+ (id)rangeErrorIntentResponseWithRangeErrorGroupNumber:(id)a0 rangeErrorGroupCount:(id)a1;

- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
