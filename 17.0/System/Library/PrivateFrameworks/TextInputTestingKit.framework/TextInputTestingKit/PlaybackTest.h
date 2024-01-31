@class NSArray;

@interface PlaybackTest : AutocorrectionTest

@property (readonly, nonatomic) NSArray *intended;
@property (readonly, nonatomic) NSArray *expected;

+ (id)loadFromPlaybackFile:(id)a0;
+ (id)loadFromSentence:(id)a0 withCatenation:(BOOL)a1;
+ (id)loadFromTextInputFile:(id)a0 withCatenation:(BOOL)a1;
+ (id)sentenceToTransliteratedPlaybackTest:(id)a0 withCatenation:(BOOL)a1;
+ (id)testsWithIntendedOutput:(id)a0 expectedOutput:(id)a1;
+ (id)testsWithIntendedOutput:(id)a0 expectedOutput:(id)a1 corpusId:(id)a2;

- (void).cxx_destruct;

@end
