@class NSString, HAPDataStreamTransportProtocolWrapper, NSData, HAPDataStreamTransportCommandWrapper;

@interface HAPDataStreamTransportSetup : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPDataStreamTransportCommandWrapper *command;
@property (retain, nonatomic) HAPDataStreamTransportProtocolWrapper *transportType;
@property (retain, nonatomic) NSData *controllerKeySalt;
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
- (id)initWithCommand:(id)a0 transportType:(id)a1 controllerKeySalt:(id)a2;
- (id)serializeWithError:(id *)a0;

@end
