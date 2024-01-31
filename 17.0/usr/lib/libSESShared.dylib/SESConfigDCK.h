@class NSString, SESConfig, NSDictionary, NSData;

@interface SESConfigDCK : NSObject {
    NSString *_mgDeviceClass;
    NSString *_mgProductVersion;
    SESConfig *_config;
    NSDictionary *_settings;
    NSString *_vehicleBrand;
    NSData *_vehicleUUID;
}

+ (BOOL)evaluateCondition:(id)a0 operator:(id)a1 value:(id)a2 brand:(id)a3 uuid:(id)a4 deviceClass:(id)a5 productVersion:(id)a6 error:(id *)a7;
+ (BOOL)evaluateOperator:(id)a0 valueFromDevice:(id)a1 valueFromConfig:(id)a2 error:(id *)a3;
+ (id)getResolvedSettingsFrom:(id)a0 brand:(id)a1 uuid:(id)a2 deviceClass:(id)a3 productVersion:(id)a4 error:(id *)a5;
+ (BOOL)isConfigurationApplicable:(id)a0 brand:(id)a1 uuid:(id)a2 deviceClass:(id)a3 productVersion:(id)a4 error:(id *)a5;

- (id)init;
- (void).cxx_destruct;
- (id)arrayValueForSetting:(unsigned long long)a0 manufacturer:(id)a1 brand:(id)a2 uuid:(id)a3 error:(id *)a4;
- (BOOL)boolValueForSetting:(unsigned long long)a0 manufacturer:(id)a1 brand:(id)a2 uuid:(id)a3 error:(id *)a4;
- (id)dictValueForSetting:(unsigned long long)a0 manufacturer:(id)a1 brand:(id)a2 uuid:(id)a3 error:(id *)a4;
- (id)getCertificate:(id)a0 manufacturer:(id)a1 environment:(id)a2 region:(id)a3 prodSE:(id)a4 keyID:(id)a5 error:(id *)a6;
- (id)getEncryptionCertificateFor:(id)a0 environment:(id)a1 region:(id)a2 error:(id *)a3;
- (id)getExternalCACertificateFor:(id)a0 environment:(id)a1 prodSE:(BOOL)a2 error:(id *)a3;
- (id)getRootCertificateFor:(id)a0 keyID:(id)a1 error:(id *)a2;
- (id)getSettingsFor:(id)a0 brand:(id)a1 uuid:(id)a2 error:(id *)a3;
- (id)getSignatureCertificateFor:(id)a0 environment:(id)a1 region:(id)a2 error:(id *)a3;
- (id)initAtPath:(id)a0 deviceClass:(id)a1 productVersion:(id)a2;
- (long long)intValueForSetting:(unsigned long long)a0 manufacturer:(id)a1 brand:(id)a2 uuid:(id)a3 error:(id *)a4;
- (BOOL)isDCKConfigurationAvailableFor:(id)a0 error:(id *)a1;

@end
