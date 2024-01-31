@class VSOptional;

@interface VSStateTransition : NSObject

@property (retain, nonatomic) VSOptional *previousState;
@property (retain, nonatomic) VSOptional *triggeringEvent;
@property (retain, nonatomic) VSOptional *nextState;

- (id)init;
- (void).cxx_destruct;

@end
