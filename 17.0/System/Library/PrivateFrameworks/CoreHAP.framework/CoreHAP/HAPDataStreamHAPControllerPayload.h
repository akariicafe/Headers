@class NSData, NSString, HAPTLVUnsignedNumberValue;

@interface HAPDataStreamHAPControllerPayload : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSData *payload;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *sessionIdentifier;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *forceClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)initWithPayload:(id)a0 sessionIdentifier:(id)a1 forceClose:(id)a2;
- (id)serializeWithError:(id *)a0;

@end
