@class NSString, NSURL, NSData;

@interface AppleTypeCRetimerFirmwareCopierOS : AppleTypeCRetimerRestoreInfoHelperOS {
    NSString *_ftabPathSuffix;
    NSURL *_ftabBundleURL;
    NSURL *_destBundlePathURL;
    NSData *_firmwareOverrideData;
    NSData *_firmwareInBundleDataDict;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)copyFirmwareToDestinationBundleWithError:(id *)a0;
- (BOOL)createDestinationBundleFirmwareDirectoryFor:(id)a0 error:(id *)a1;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2;
- (BOOL)parseOptions:(id)a0;
- (id)readFirmwareFileDataWithError:(id *)a0;
- (id)rtKitKeyFromBuildIdentityDict:(id)a0;

@end
