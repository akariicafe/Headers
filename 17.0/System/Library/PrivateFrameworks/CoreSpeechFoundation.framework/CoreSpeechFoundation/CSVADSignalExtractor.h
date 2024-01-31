@class NSMutableArray;
@protocol CSVADSignalExtractorDelegate;

@interface CSVADSignalExtractor : NSObject

@property (nonatomic) BOOL isSpeechDetected;
@property (weak, nonatomic) id<CSVADSignalExtractorDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *speechDetectedRanges;
@property (nonatomic) unsigned long long lastSpeechStartSampleCount;
@property (readonly, nonatomic) BOOL hasSpeechEverDetected;

- (void)reset;
- (void).cxx_destruct;
- (BOOL)hasSpeechDetectedFromStartSampleCount:(unsigned long long)a0 toEndSampleCount:(unsigned long long)a1;
- (id)initWithToken:(id)a0 delegate:(id)a1;
- (void)processBufferSampleWithIndex:(unsigned long long)a0 startSampleCount:(unsigned long long)a1 isSampleRepresentSpeech:(BOOL)a2 vadToSpeechRatio:(unsigned long long)a3;

@end
