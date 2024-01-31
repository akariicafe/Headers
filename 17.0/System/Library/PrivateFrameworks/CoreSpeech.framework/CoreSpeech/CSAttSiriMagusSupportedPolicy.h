@class NSString;

@interface CSAttSiriMagusSupportedPolicy : NSObject <CSAttSiriMitigationAssetHandlerDelegate, CSBluetoothWirelessSplitterMonitorDelegate, CSPhoneCallStateMonitorDelegate>

@property BOOL isAssetMagusSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initialize;
+ (BOOL)_isInputOriginSupportedByContinuousConversation:(id)a0;

- (void)start;
- (void)CSBluetoothWirelessSplitterMonitor:(id)a0 didReceiveSplitterStateChange:(unsigned long long)a1 shouldDisableSpeakerVerificationInSplitterMode:(BOOL)a2;
- (void)CSPhoneCallStateMonitor:(id)a0 didRecievePhoneCallStateChange:(unsigned long long)a1;
- (void)_updateWithAsset:(id)a0;
- (BOOL)_isMagusSupportedWithRecordRoute:(id)a0 playbackRoute:(id)a1 isInSplitterMode:(BOOL)a2 isInActiveCall:(BOOL)a3 isSupportedRequestType:(BOOL)a4 audioSessionId:(unsigned int)a5;
- (BOOL)getIsAssetMagusSupported;
- (BOOL)getIsMagusSupported;
- (BOOL)isMagusSupportedWithAudioRecordContext:(id)a0 recordRoute:(id)a1 playbackRoute:(id)a2 audioSessionId:(unsigned int)a3;
- (BOOL)isMagusSupportedWithInputOrigin:(id)a0 recordRoute:(id)a1 playbackRoute:(id)a2 isInSplitterMode:(BOOL)a3 isInActiveCall:(BOOL)a4;
- (void)mitigationAssetHandler:(id)a0 endpointId:(id)a1 didChangeCachedAsset:(id)a2;

@end
