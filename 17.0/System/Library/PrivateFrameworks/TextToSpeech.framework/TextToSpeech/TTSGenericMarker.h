@class NSString, AVSpeechSynthesisMarker;

@interface TTSGenericMarker : NSObject <TTSMarker>

@property (nonatomic) long long byteOffset;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) long long markType;
@property (readonly, nonatomic) AVSpeechSynthesisMarker *avMark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
