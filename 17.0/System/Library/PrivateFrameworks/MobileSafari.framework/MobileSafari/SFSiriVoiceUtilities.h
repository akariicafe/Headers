@class SiriTTSDaemonSession, NSArray, NSURL, NSString;

@interface SFSiriVoiceUtilities : NSObject {
    SiriTTSDaemonSession *_activeSiriDaemonSession;
}

@property (class, readonly, nonatomic) SFSiriVoiceUtilities *sharedVoiceUtilities;

@property (readonly, nonatomic) NSArray *downloadedSiriVoiceLanguages;
@property (copy, nonatomic) NSURL *activeSiriReaderSessionURL;
@property (copy, nonatomic) NSString *activeSiriReaderSessionIdentifier;

- (void).cxx_destruct;
- (void)fetchAvailableVoiceLanguages;

@end
