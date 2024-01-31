@class NSString, NSDictionary;

@interface BSServiceSpecification : NSObject <NSCopying, BSDescriptionProviding> {
    NSDictionary *_options;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isHiddenAtLaunch) BOOL hiddenAtLaunch;
@property (readonly, nonatomic, getter=isDerived) BOOL derived;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)optionForKey:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
