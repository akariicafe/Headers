@class NSString, NSNumber;

@interface PatternExecutionDialog : NSObject

@property (retain, nonatomic) NSString *dialogId;
@property (retain, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSString *fullPrint;
@property (retain, nonatomic) NSString *fullSpeak;
@property (retain, nonatomic) NSString *supportingPrint;
@property (retain, nonatomic) NSString *supportingSpeak;
@property (retain, nonatomic) NSNumber *printOnly;
@property (retain, nonatomic) NSNumber *spokenOnly;

- (void).cxx_destruct;

@end
