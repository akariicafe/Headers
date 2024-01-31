@interface IMSharedMessageSendingUtilities : NSObject

@property long long serviceAvailability;

+ (id)sharedInstance;
+ (void)initialize;
+ (void)_setupAccountMonitor;

- (BOOL)isiMessageEnabled;
- (BOOL)canSendPhotos:(int)a0 videos:(int)a1 audioClips:(int)a2;
- (BOOL)isMMSEnabled;
- (BOOL)canSendText;
- (BOOL)_canSendText;
- (BOOL)_hasSMSCapability;
- (BOOL)_isiMessageSupported;
- (id)_managedConfigAppAllowlist;
- (long long)_maxMMSAttachmentCount;
- (long long)_maxMMSMessageByteCount;
- (void)_updateServiceAvailability;
- (BOOL)isSupportedAttachmentUTI:(id)a0;

@end
