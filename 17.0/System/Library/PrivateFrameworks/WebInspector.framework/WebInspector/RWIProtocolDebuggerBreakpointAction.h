@class NSString;

@interface RWIProtocolDebuggerBreakpointAction : RWIProtocolJSONObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *data;
@property (nonatomic) int identifier;
@property (nonatomic) BOOL emulateUserGesture;

- (id)initWithType:(long long)a0;

@end
