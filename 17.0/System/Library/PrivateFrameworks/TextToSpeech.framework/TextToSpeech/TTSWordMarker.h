@class NSString, AVSpeechSynthesisMarker;

@interface TTSWordMarker : NSObject <TTSMarker>

@property (nonatomic) long long byteOffset;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } wordRange;
@property (readonly, nonatomic) long long markType;
@property (readonly, nonatomic) AVSpeechSynthesisMarker *avMark;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
