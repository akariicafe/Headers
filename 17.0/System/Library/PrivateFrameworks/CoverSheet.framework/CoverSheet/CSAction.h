@class SBFLockScreenActionContext;

@interface CSAction : NSObject

@property (nonatomic) long long type;
@property (nonatomic) BOOL animated;
@property (retain, nonatomic) SBFLockScreenActionContext *context;

+ (id)actionWithContext:(id)a0;
+ (id)actionWithType:(long long)a0 animated:(BOOL)a1;
+ (id)actionWithType:(long long)a0;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;

@end
