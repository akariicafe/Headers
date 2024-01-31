@class NSString, NSData, HAPDataStreamTransportCommandStatusWrapper, HAPDataStreamTransportParameters;

@interface HAPDataStreamTransportSetupResponse : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPDataStreamTransportCommandStatusWrapper *status;
@property (retain, nonatomic) HAPDataStreamTransportParameters *parameters;
@property (retain, nonatomic) NSData *accessoryKeySalt;
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
- (id)initWithStatus:(id)a0 parameters:(id)a1 accessoryKeySalt:(id)a2;
- (id)serializeWithError:(id *)a0;

@end
