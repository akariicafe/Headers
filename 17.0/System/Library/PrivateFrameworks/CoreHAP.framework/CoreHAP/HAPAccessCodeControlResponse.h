@class NSString, HAPAccessCodeResponseStatusWrapper, HAPAccessCodeFlagsWrapper, HAPTLVUnsignedNumberValue;

@interface HAPAccessCodeControlResponse : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVUnsignedNumberValue *identifier;
@property (retain, nonatomic) NSString *accessCode;
@property (retain, nonatomic) HAPAccessCodeFlagsWrapper *flags;
@property (retain, nonatomic) HAPAccessCodeResponseStatusWrapper *statusCode;
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
- (id)initWithIdentifier:(id)a0 accessCode:(id)a1 flags:(id)a2 statusCode:(id)a3;
- (id)serializeWithError:(id *)a0;

@end
