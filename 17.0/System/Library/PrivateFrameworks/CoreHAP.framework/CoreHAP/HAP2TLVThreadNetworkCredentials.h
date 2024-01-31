@class NSString, NSData, HAPTLVUnsignedNumberValue;

@interface HAP2TLVThreadNetworkCredentials : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSString *networkName;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *channel;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *panID;
@property (retain, nonatomic) NSData *extendedPanID;
@property (retain, nonatomic) NSData *masterKey;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *reattachPeriod;
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
- (id)initWithNetworkName:(id)a0 channel:(id)a1 panID:(id)a2 extendedPanID:(id)a3 masterKey:(id)a4 reattachPeriod:(id)a5;
- (id)serializeWithError:(id *)a0;

@end
