@class NSString;

@interface CEMPredicateBase : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadType;

+ (id)predicateForPayload:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)evaluateWithOptions:(id)a0 error:(id *)a1;

@end
