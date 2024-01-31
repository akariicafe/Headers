@class NSString, NSMutableArray;

@interface SBChainableModifierEventResponse : NSObject <BSDescriptionProviding> {
    NSMutableArray *_childResponses;
    BOOL _consumed;
    id /* block */ _validator;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic) double delay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newEventResponse;
+ (id)responseByAppendingResponse:(id)a0 toResponse:(id)a1;

- (id)init;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)loggingCategory;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)_initWithChildResponses:(id)a0;
- (void)addChildResponse:(id)a0;
- (void)addChildResponses:(id)a0;
- (void)consumeWithReason:(id)a0;
- (void)enumerateChildResponsesUsingBlock:(id /* block */)a0;
- (void)enumerateResponseTreeUsingBlock:(id /* block */)a0;
- (void)enumerateResponseTreeUsingBlock:(id /* block */)a0 stop:(BOOL *)a1;
- (void)insertChildResponse:(id)a0 atIndex:(unsigned long long)a1;
- (id)responseByTransformingResponseWithTransformer:(id /* block */)a0;
- (void)setDelay:(double)a0 withValidator:(id /* block */)a1;

@end
