@class NSString, NSDictionary, NSDate;

@interface POMutableKeyExchangeResponseJWTBody : POKeyExchangeResponseJWTBody <POMutableJWTBody>

@property (retain) NSDate *iat;
@property (retain) NSDate *exp;
@property (retain) NSString *key;
@property (retain) NSString *key_context;
@property (readonly) NSDictionary *allData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
