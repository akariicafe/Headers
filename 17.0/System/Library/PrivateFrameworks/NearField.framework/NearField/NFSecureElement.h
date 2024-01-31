@class NSString, NSNumber, NFHardwareSecureElementInfo;

@interface NFSecureElement : NSObject {
    NFHardwareSecureElementInfo *_info;
    BOOL _isDirty;
}

@property (readonly) NSString *serialNumber;
@property (readonly) NSString *systemOSSerialNumber;
@property (readonly) NSString *rsaCertificate;
@property (readonly) NSString *eccCertificate;
@property (readonly) NSString *eckaCertificate;
@property (readonly) BOOL isProductionSigned;
@property (readonly) BOOL isInRestrictedMode;
@property (readonly) unsigned long long OSVersion;
@property (readonly) unsigned long long fullOSVersion;
@property (readonly) NSNumber *sequenceCounter;
@property (readonly) unsigned int supportedTechnologies;
@property (readonly) BOOL available;

+ (id)cachedEmbeddedSecureElementSerialNumber:(id *)a0;
+ (unsigned int)supportedTechnologies;
+ (id)embeddedSecureElement;
+ (id)icefallSecureElement;
+ (id)embeddedSecureElementWithError:(id *)a0;

- (void)_setIsInRestrictedPerformanceMode:(BOOL)a0;
- (id)manifestQueryBlob;
- (void)_updateSecureElementInfo:(id)a0;
- (BOOL)isSeshatAvailabledInRestrictedMode;
- (id)identifier;
- (void)_updateIfDirty;
- (id)_initWithInfo:(id)a0;
- (void).cxx_destruct;
- (void)_setIsInRestrictedMode:(BOOL)a0;
- (id)info;
- (void)_markDirty;
- (unsigned int)hwType;

@end
