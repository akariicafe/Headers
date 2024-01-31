@class NSNumber;

@interface CSEvent : NSObject

@property (nonatomic) long long type;
@property (nonatomic, getter=isConsumable) BOOL consumable;
@property (nonatomic, getter=isStateless) BOOL stateless;
@property (retain, nonatomic) NSNumber *value;

+ (id)eventWithType:(long long)a0;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;

@end
