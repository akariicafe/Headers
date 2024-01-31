@class NSString;

@interface RWIProtocolRuntimeExecutionContextDescription : RWIProtocolJSONObject

@property (nonatomic) int identifier;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *frameId;

- (id)initWithIdentifier:(int)a0 type:(long long)a1 name:(id)a2 frameId:(id)a3;

@end
