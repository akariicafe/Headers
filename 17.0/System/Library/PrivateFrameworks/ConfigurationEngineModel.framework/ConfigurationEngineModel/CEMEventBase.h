@class NSString;

@interface CEMEventBase : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadType;

+ (id)eventForPayload:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
