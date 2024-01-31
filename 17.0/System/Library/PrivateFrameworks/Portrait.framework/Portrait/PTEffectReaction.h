@interface PTEffectReaction : NSObject

@property long long triggerID;
@property unsigned long long effectType;
@property unsigned long long orientation;
@property void /* unknown type, empty encoding */ position;
@property BOOL uiTriggeredReaction;

- (id)emoji;

@end
