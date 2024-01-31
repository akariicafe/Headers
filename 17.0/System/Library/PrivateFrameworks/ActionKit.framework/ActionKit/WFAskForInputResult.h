@class NSString, NSURL, NSDateComponents, NSNumber;

@interface WFAskForInputResult : INObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *stringValue;
@property (copy, nonatomic) NSNumber *numberValue;
@property (copy, nonatomic) NSURL *urlValue;
@property (copy, nonatomic) NSDateComponents *dateValue;
@property (copy, nonatomic) NSDateComponents *timeValue;
@property (copy, nonatomic) NSDateComponents *dateAndTimeValue;

@end
