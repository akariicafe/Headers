@interface STKNotifySessionData : STKTextSessionData

@property (readonly, nonatomic) long long notifyType;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithText:(id)a0 simLabel:(id)a1 notifyType:(long long)a2;

@end
