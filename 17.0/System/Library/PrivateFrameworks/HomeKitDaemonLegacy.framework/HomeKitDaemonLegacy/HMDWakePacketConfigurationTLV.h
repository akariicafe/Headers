@class HMDSleepConfigurationWakeUpTypeWrapper, NSString, NSData, HAPTLVUnsignedNumberValue, HMDSleepConfigurationWakePacketTypeWrapper;

@interface HMDWakePacketConfigurationTLV : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HMDSleepConfigurationWakePacketTypeWrapper *wakePacketType;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *wakeDestinationPort;
@property (retain, nonatomic) NSData *wakeDestinationAddress;
@property (retain, nonatomic) HMDSleepConfigurationWakeUpTypeWrapper *wakeType;
@property (retain, nonatomic) NSData *wakePattern;
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
- (id)serializeWithError:(id *)a0;
- (id)initWithWakePacketType:(id)a0 wakeDestinationPort:(id)a1 wakeDestinationAddress:(id)a2 wakeType:(id)a3 wakePattern:(id)a4;

@end
