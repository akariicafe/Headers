@class TPDialerSoundController, NSString;
@protocol TPDialerKeypadDelegate;

@interface TPDialerNumberPad : TPNumberPad <TPDialerKeypadProtocol>

@property (retain) TPDialerSoundController *soundController;
@property (nonatomic) BOOL playsSounds;
@property id<TPDialerKeypadDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dialerNumberPadFullCharacters;
+ (id)dialerNumberPadNumericCharacters;

- (void)buttonTapped:(id)a0;
- (void)buttonUp:(id)a0;
- (void).cxx_destruct;
- (long long)indexForHighlightedKey;
- (void)highlightKeyAtIndex:(long long)a0;
- (void)buttonLongPressed:(id)a0;
- (void)buttonDown:(id)a0;
- (void)buttonUpOutside:(id)a0;

@end
