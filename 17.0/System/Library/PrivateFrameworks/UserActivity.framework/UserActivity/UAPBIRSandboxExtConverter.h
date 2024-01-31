@class NSString;

@interface UAPBIRSandboxExtConverter : NSObject <UAPBIRConverter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerConverter;

- (id)typeString;
- (id)convertIRDataToPlatform:(id)a0;
- (id)convertPlatformDataToIR:(id)a0;

@end
