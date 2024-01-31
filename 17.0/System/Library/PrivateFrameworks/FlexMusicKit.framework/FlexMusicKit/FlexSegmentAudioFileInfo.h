@class NSArray;

@interface FlexSegmentAudioFileInfo : NSObject

@property (nonatomic) long long sampleRate;
@property (nonatomic) long long sampleCount;
@property (nonatomic) long long bpm;
@property (nonatomic) long long bars;
@property (nonatomic) long long samplesPerBar;
@property (retain, nonatomic) NSArray *customBarMarkers;

- (void).cxx_destruct;

@end
