@class SSMLParseError, NSString, NSArray;

@interface SSMLParseResult : NSObject

@property (retain, nonatomic) SSMLParseError *error;
@property (retain, nonatomic) NSString *ssmlResult;
@property (retain, nonatomic) NSString *plainTextResult;
@property (retain, nonatomic) NSString *plainTalkResult;
@property (retain, nonatomic) NSArray *utteranceResult;

- (void).cxx_destruct;

@end
