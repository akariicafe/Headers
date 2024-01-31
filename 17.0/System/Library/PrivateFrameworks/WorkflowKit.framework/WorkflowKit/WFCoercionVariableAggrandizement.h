@interface WFCoercionVariableAggrandizement : WFVariableAggrandizement

@property (readonly, nonatomic) Class coercionItemClass;

- (unsigned long long)hash;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)applyToContentCollection:(id)a0 completionHandler:(id /* block */)a1;
- (id)coercionItemClasses;
- (id)initWithCoercionItemClass:(Class)a0;
- (id)processedContentClasses:(id)a0;

@end
