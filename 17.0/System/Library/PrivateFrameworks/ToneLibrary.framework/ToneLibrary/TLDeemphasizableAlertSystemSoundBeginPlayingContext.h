@class TLSystemSound, NSString, TLAlert, TLAlertSystemSoundContext;

@interface TLDeemphasizableAlertSystemSoundBeginPlayingContext : NSObject

@property (retain, nonatomic) TLAlert *alert;
@property (retain, nonatomic) TLAlertSystemSoundContext *alertSystemSoundContext;
@property (copy, nonatomic) NSString *toneIdentifierForDeemphasizingAlert;
@property (retain, nonatomic) TLSystemSound *sound;

- (void).cxx_destruct;

@end
