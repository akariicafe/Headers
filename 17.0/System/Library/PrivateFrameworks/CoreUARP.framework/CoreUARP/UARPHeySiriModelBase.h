@class NSMutableArray, UARPAccessory, NSURL, UARPController, NSObject, UARPSuperBinaryAsset;
@protocol UARPHeySiriModelDelegateProtocol, OS_os_log, OS_dispatch_queue;

@interface UARPHeySiriModelBase : NSObject {
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_queue;
    NSURL *_url;
    UARPController *_controller;
    UARPSuperBinaryAsset *_superbinary;
    unsigned long long _majorVersion;
    unsigned long long _minorVersion;
    unsigned long long _uarpProtocolVersion;
    unsigned long long _engineType;
    NSMutableArray *_downloadedModels;
    NSMutableArray *_preinstalledModels;
}

@property (readonly) UARPAccessory *accessory;
@property (weak) id<UARPHeySiriModelDelegateProtocol> delegate;

- (unsigned long long)majorVersion;
- (id)init;
- (id)log;
- (void)setEngineType:(unsigned long long)a0;
- (unsigned long long)engineType;
- (unsigned long long)minorVersion;
- (void)setUrl:(id)a0;
- (void)setMajorVersion:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)url;
- (void)setMinorVersion:(unsigned long long)a0;
- (void)setSuperbinary:(id)a0;
- (void)addDownloadedModel:(id)a0;
- (void)addPreInstalledModel:(id)a0;
- (void)checkCurrentHeySiriModel;
- (void)checkCurrentJustSiriModel;
- (void)checkCurrentJustSiriModelAvailable;
- (id)initWithAccessory:(id)a0 controller:(id)a1 url:(id)a2;
- (id)initWithAccessory:(id)a0 uarpProtocolVersion:(unsigned long long)a1 controller:(id)a2 url:(id)a3;
- (void)offerDownloadModel:(id)a0 fallbackModel:(id)a1 tag:(id)a2 assetVersion:(id)a3 error:(id)a4;
- (BOOL)offerDynamicAssetToAccessory:(id)a0 tag:(id)a1 error:(id *)a2;
- (BOOL)processDynamicAsset:(id *)a0;
- (id)superbinary;
- (id)uarpPayloadWithHSModel:(id)a0 tag:(id)a1;
- (unsigned long long)uarpProtocolVersion;

@end
