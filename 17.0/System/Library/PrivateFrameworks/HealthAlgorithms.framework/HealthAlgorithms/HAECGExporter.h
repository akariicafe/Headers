@class NSString, NSDateFormatter, NSDate, NSMutableArray;

@interface HAECGExporter : NSObject <SRMultiSampleExporting> {
    NSMutableArray *_currentLiveWaveform;
    NSMutableArray *_currentLiveWaveformFlags;
    NSDate *_contactDetected;
    unsigned long long _counter;
    NSDateFormatter *dateFormatter;
    float _frequency;
    NSDate *_mostRecentDate;
    BOOL _seenEndFlag;
    BOOL _seenStartFlag;
    BOOL _ecgApp;
    BOOL _rightArmMinusLeftArm;
    NSString *_sessionIdentifier;
}

@property (readonly, nonatomic) BOOL fromRightWrist;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generateDictionary;
- (void).cxx_destruct;
- (void)resetSession;
- (void)sr_beginMultiSampleStream;
- (id)sr_dictionaryRepresentationWithSample:(id)a0;
- (id)sr_endMultiSampleStream;

@end
