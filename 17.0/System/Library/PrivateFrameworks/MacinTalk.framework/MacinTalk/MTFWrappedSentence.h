@interface MTFWrappedSentence : MTFWrappedSpeechElement

@property (readonly, nonatomic) short fFlags;
@property (readonly, nonatomic) float fDuration;
@property (readonly, nonatomic) short fNumWords;
@property (readonly, nonatomic) short fFinalRate;
@property (readonly, nonatomic) float fBaseFloor;
@property (readonly, nonatomic) float fBaseRange;
@property (readonly, nonatomic) float fBaseRate;

- (struct MTFESentence { void /* function */ **x0; short x1; char x2; struct MTFESpeechElement *x3; struct MTFESpeechElement *x4; struct MTFESpeechElement *x5; struct MTFESpeechElement *x6; struct MTFESpeechElement *x7; short x8; float x9; short x10; short x11; float x12; float x13; float x14; struct MTFESpeechElement *x15; } *)elem;

@end
