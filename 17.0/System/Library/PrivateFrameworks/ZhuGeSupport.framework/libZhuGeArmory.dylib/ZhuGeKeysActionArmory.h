@class NSString;

@interface ZhuGeKeysActionArmory : NSObject

@property (class, retain) NSString *key;

+ (id)ZhuGeToDo:(id)a0 withError:(id *)a1;
+ (id)getReportFDRDiagnosticFromOption:(id)a0 withError:(id *)a1;
+ (id)queryBasebandFirmwareSecurityInfo:(id)a0 withError:(id *)a1;
+ (id)queryDisplayUniqueChipIDWithError:(id *)a0;
+ (id)queryFDRDeviceAsidMetadataIsVerified:(id)a0 withError:(id *)a1;
+ (id)queryFDRSealingStatusWithManifestOverride:(id)a0 WithError:(id *)a1;
+ (id)queryIOCameraByProperty:(id)a0 withError:(id *)a1;
+ (id)queryIOProperty:(id)a0 fromCriteria:(id)a1 withError:(id *)a2;
+ (id)queryIOPropertyFromPath:(id)a0 andCriteria:(id)a1 withError:(id *)a2;
+ (id)queryMogulIDSN:(id)a0 withError:(id *)a1;
+ (id)queryMogulTouchScreenCertDecoded:(BOOL)a0 withError:(id *)a1;
+ (id)queryNFSecureElementByKey:(id)a0 WithError:(id *)a1;
+ (id)querySecureElementIDWithError:(id *)a0;
+ (id)querySysCfgKey:(id)a0 withError:(id *)a1;
+ (id)querySysctlVariableName:(id)a0 dataType:(id)a1 withError:(id *)a2;
+ (id)queryThreadRadioMacAddress64BitWithError:(id *)a0;
+ (id)queryThreadRadioMacAddressForProvisioningWithError:(id *)a0;
+ (id)queryTouchScreenCert:(id *)a0;
+ (id)queryVinylEUICCCSNwithError:(id *)a0;
+ (id)queryWLHWIdentifierInfoByProperty:(id)a0 withError:(id *)a1;
+ (id)queryWLModuleSerialNumberWithError:(id *)a0;

@end
