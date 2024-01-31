@class NSURL, NSString, NSData;

@interface Ace3SoCRestoreInfoFirmwareCopierOS : Ace3SoCRestoreInfoHelperOS {
    NSURL *_destBundlePathURL;
    NSString *_firmwarePathSuffix;
    NSURL *_firmwareBundleURL;
    NSData *_firmwareOverrideData;
    NSData *_firmwareInBundleDataDict;
}

- (void).cxx_destruct;
- (BOOL)copyFirmwareToDestinationBundleWithError:(id *)a0;
- (id)firmwareKeyFromBuildIdentityDict:(id)a0 deviceInfo:(id)a1;
- (id)initWithOptions:(id)a0 logFunction:(void /* function */ *)a1 logContext:(void *)a2;
- (BOOL)parseOptions:(id)a0;
- (id)readFirmwareFileDataWithError:(id *)a0;

@end
