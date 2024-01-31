@class HAPDataStreamTransportProtocolWrapper, NSString, HAPTLVUnsignedNumberValue;

@interface HAPDataStreamTransportConfiguration : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPDataStreamTransportProtocolWrapper *transport;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *maximumControllerTransportMTU;
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
- (id)initWithTransport:(id)a0 maximumControllerTransportMTU:(id)a1;
- (id)serializeWithError:(id *)a0;

@end
