@class AVAudioFormat, NSString, NSDictionary, NSURL, RCSSavedRecordingAccessToken;

@interface _RCSAudioFile : NSObject <RCSAudioFile>

@property (retain, nonatomic) RCSSavedRecordingAccessToken *fileToken;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) AVAudioFormat *fileFormat;
@property (readonly, nonatomic) AVAudioFormat *processingFormat;
@property (readonly, nonatomic) NSDictionary *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
