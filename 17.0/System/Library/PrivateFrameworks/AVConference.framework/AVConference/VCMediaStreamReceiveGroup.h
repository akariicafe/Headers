@class NSNumber, NSString, NSMutableDictionary;

@interface VCMediaStreamReceiveGroup : VCMediaStreamGroup <VCMediaStreamDelegate> {
    BOOL _receivingEndToEndStream;
    NSMutableDictionary *_streamToMaxNetworkBitrate;
    NSMutableDictionary *_streamToActualNetworkBitrate;
}

@property (readonly, nonatomic) NSNumber *optedInStreamID;
@property (retain, nonatomic) NSNumber *activeStreamID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0;
- (void)dealloc;
- (void)notifyChangeInActiveMediaBitrateTo:(unsigned int)a0 from:(unsigned int)a1;
- (void)setActiveStreamIDs:(id)a0;
- (void)setActualBitrateForOptedInStreamWithActiveStreamID:(id)a0;
- (void)setupMaxBitrateMap;
- (void)vcMediaStreamDidDecryptionTimeOut:(id)a0;
- (void)vcMediaStreamDidDecryptionTimeOutForMKMRecovery:(id)a0;
- (void)vcMediaStreamDidRTCPTimeOut:(id)a0;
- (void)vcMediaStreamDidRTPTimeOut:(id)a0;

@end
