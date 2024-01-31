@class NSString, HAPWiFiSecurityModeWrapper, NSData;

@interface HAPWiFiStationConfiguration : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) NSString *SSID;
@property (retain, nonatomic) HAPWiFiSecurityModeWrapper *securityMode;
@property (retain, nonatomic) NSData *PSK;
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
- (id)initWithSSID:(id)a0 securityMode:(id)a1 PSK:(id)a2;
- (id)serializeWithError:(id *)a0;

@end
