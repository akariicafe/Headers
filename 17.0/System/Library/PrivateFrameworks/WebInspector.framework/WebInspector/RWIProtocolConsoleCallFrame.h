@class NSString;

@interface RWIProtocolConsoleCallFrame : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *functionName;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *scriptId;
@property (nonatomic) int lineNumber;
@property (nonatomic) int columnNumber;

- (id)initWithFunctionName:(id)a0 url:(id)a1 scriptId:(id)a2 lineNumber:(int)a3 columnNumber:(int)a4;

@end
