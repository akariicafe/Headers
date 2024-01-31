@class WFType, WFCoercionHandler;

@interface WFCoercion : NSObject

@property (readonly, nonatomic) WFType *type;
@property (readonly, nonatomic) WFCoercionHandler *handler;

+ (id)coercionToClass:(Class)a0 handler:(id)a1;
+ (id)coercionToType:(id)a0 handler:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (BOOL)canProduceType:(id)a0;
- (BOOL)canProduceType:(id)a0 withConcurrencyMode:(long long)a1;
- (id)initWithType:(id)a0 handler:(id)a1;

@end
