@class MTFVoice, MTFrontendSimple, NSNumber, AVAudioFormat;
@protocol MacinTalkPhraseProcessorDelegate;

@interface MTWrappedPhraseProcessor : NSObject

@property void *processor;
@property (weak, nonatomic) MTFVoice *voice;
@property (retain, nonatomic) AVAudioFormat *format;
@property struct MTBEPersistentParam { float x0; float x1; float x2[4]; char x3[4]; int x4; float x5; struct __CFDictionary *x6; short x7; short x8; struct SLLexer *x9; struct __CFArray *x10; struct MTMBDiphoneStatistics *x11; struct __CFDictionary *x12; struct SLDictLookup *x13; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x14; struct _opaque_pthread_cond_t { long long x0; char x1[40]; } x15; struct MTMBSelectUnits *x16; } *fPParams;
@property struct MTBENotifier { void /* function */ **x0; int x1; int x2; int x3; int x4; struct SpeechErrorInfo { short x0; short x1; long long x2; short x3; long long x4; } x5; short x6; unsigned int x7; unsigned short x8[4]; } *notifier;
@property struct MTBENotifier { void /* function */ **x0; int x1; int x2; int x3; int x4; struct SpeechErrorInfo { short x0; short x1; long long x2; short x3; long long x4; } x5; short x6; unsigned int x7; unsigned short x8[4]; } *saveState;
@property struct MTBENotifier { void /* function */ **x0; int x1; int x2; int x3; int x4; struct SpeechErrorInfo { short x0; short x1; long long x2; short x3; long long x4; } x5; short x6; unsigned int x7; unsigned short x8[4]; } *resetState;
@property (retain, nonatomic) NSNumber *defaultModulation;
@property long long currentSampleCount;
@property (retain, nonatomic) MTFrontendSimple *frontend;
@property (weak, nonatomic) id<MacinTalkPhraseProcessorDelegate> delegate;
@property (retain, nonatomic) NSNumber *pitchModulation;

- (void)dealloc;
- (void).cxx_destruct;
- (id)nextBuffer;
- (void)finishedSampleGeneration;
- (void)generatedSampleForPhoneme:(short)a0;
- (void)generatedSampleForSync:(unsigned int)a0;
- (void)generatedSampleForWord:(unsigned long long)a0 length:(unsigned short)a1;
- (id)initWithVoice:(id)a0 frontend:(id)a1;
- (BOOL)processNextPhrase;

@end
