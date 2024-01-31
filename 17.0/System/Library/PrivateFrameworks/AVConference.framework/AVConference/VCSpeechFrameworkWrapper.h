@interface VCSpeechFrameworkWrapper : NSObject

@property (readonly, nonatomic) BOOL frameworkLoaded;

+ (id)defaultSpeechFrameworkWrapper;

- (id)init;
- (id)supportedLocales;
- (id)findSpeechFrameworkPath;
- (BOOL)loadSpeechFramework;
- (id)newSFSpeechAudioBufferRecognitionRequest;
- (id)newSFSpeechRecognizerWithLocale:(id)a0;

@end
