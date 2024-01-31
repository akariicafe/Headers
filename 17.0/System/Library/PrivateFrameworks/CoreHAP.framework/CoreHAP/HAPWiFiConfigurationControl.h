@class HAPWiFiConfigurationUpdateStatusWrapper, NSString, HAPTLVUnsignedNumberValue, HAPWiFiConfigurationOperationTypeWrapper, HAPWiFiStationConfiguration;

@interface HAPWiFiConfigurationControl : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPWiFiConfigurationOperationTypeWrapper *operationType;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *cookie;
@property (retain, nonatomic) HAPWiFiConfigurationUpdateStatusWrapper *updateStatus;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *operationTimeout;
@property (retain, nonatomic) NSString *countryCodeConfiguration;
@property (retain, nonatomic) HAPWiFiStationConfiguration *stationConfiguration;
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
- (id)initWithOperationType:(id)a0 cookie:(id)a1 updateStatus:(id)a2 operationTimeout:(id)a3 countryCodeConfiguration:(id)a4 stationConfiguration:(id)a5;
- (id)serializeWithError:(id *)a0;

@end
