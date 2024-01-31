@class NSString;

@interface RWIProtocolDebuggerLocation : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *scriptId;
@property (nonatomic) int lineNumber;
@property (nonatomic) int columnNumber;

- (id)initWithScriptId:(id)a0 lineNumber:(int)a1;

@end
