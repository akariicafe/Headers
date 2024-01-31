@class NSString, HAPAccessCodeCharacterSetWrapper, HAPTLVUnsignedNumberValue;

@interface HAPAccessCodeConfiguration : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPAccessCodeCharacterSetWrapper *characterSet;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *minimumValueLength;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *maximumValueLength;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *maximumAccessCodes;
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
- (id)initWithCharacterSet:(id)a0 minimumValueLength:(id)a1 maximumValueLength:(id)a2 maximumAccessCodes:(id)a3;
- (id)serializeWithError:(id *)a0;

@end
