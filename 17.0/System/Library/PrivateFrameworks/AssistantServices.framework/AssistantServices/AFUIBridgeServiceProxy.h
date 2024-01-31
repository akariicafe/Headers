@class AFUIBridgeClient, NSString;

@interface AFUIBridgeServiceProxy : NSObject <AFUIBridgeServiceDelegate>

@property (weak, nonatomic) AFUIBridgeClient *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithClient:(id)a0;
- (void).cxx_destruct;
- (oneway void)uiBridgeServiceDetectedSiriDirectedSpeech;
- (oneway void)uiBridgeServiceDetectedSpeechStart;
- (oneway void)uiBridgeServiceDetectedSpeechStart:(BOOL)a0;
- (oneway void)uiBridgeServiceDidStart;
- (oneway void)uiBridgeServiceDidStartAttending;
- (oneway void)uiBridgeServiceDidStartAttendingWithRootRequestId:(id)a0;
- (oneway void)uiBridgeServiceDidStopAttendingUnexpectedlyWithReason:(unsigned long long)a0;
- (oneway void)uiBridgeServiceReceivedShowAssetsDownloadPrompt;
- (oneway void)uiBridgeServiceReceivedSpeechMitigationResult:(unsigned long long)a0;
- (oneway void)uiBridgeServiceWillStartAttending;

@end
