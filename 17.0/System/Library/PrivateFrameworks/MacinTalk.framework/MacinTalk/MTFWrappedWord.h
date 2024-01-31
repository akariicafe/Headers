@class NSString;

@interface MTFWrappedWord : MTFWrappedSpeechElement

@property (readonly, nonatomic) NSString *fText;
@property (readonly, nonatomic) NSString *fGroupPOS;
@property (readonly, nonatomic) NSString *fResolvedPOS;

- (struct MTFEWord { void /* function */ **x0; short x1; char x2; struct MTFESpeechElement *x3; struct MTFESpeechElement *x4; struct MTFESpeechElement *x5; struct MTFESpeechElement *x6; struct MTFESpeechElement *x7; unsigned int x8; short x9; char x10; unsigned char x11; int x12; unsigned char x13; struct SLWordTagSet { unsigned short x0[8]; } x14; unsigned char x15; unsigned int x16; struct SLWordTagSet { unsigned short x0[8]; } x17; struct MTFECommands { void /* function */ **x0; short x1; char x2; struct MTFESpeechElement *x3; struct MTFESpeechElement *x4; struct MTFESpeechElement *x5; struct MTFESpeechElement *x6; struct MTFESpeechElement *x7; } x18; struct MTFEPosition { short x0; short x1; } x19; struct MTFEPosition { short x0; short x1; } x20; short x21; short x22; short x23; unsigned short x24; unsigned short x25; struct MTFEWord *x26; char x27[64]; struct MEOWWordInstance *x28; } *)elem;

@end
