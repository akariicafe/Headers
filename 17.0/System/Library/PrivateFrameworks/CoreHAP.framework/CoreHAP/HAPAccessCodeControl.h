@class NSString, HAPAccessCodeOperationTypeWrapper, NSMutableArray;

@interface HAPAccessCodeControl : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPAccessCodeOperationTypeWrapper *operationType;
@property (retain, nonatomic) NSMutableArray *accessCodeControlRequest;
@property (retain, nonatomic) NSMutableArray *accessCodeControlResponse;
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
- (id)initWithOperationType:(id)a0 accessCodeControlRequest:(id)a1 accessCodeControlResponse:(id)a2;
- (id)serializeWithError:(id *)a0;

@end
