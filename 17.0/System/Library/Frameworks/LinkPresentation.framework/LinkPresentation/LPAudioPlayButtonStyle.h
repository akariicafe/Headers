@class LPPointUnit, LPSize, LPAudioPlayButtonTheme;

@interface LPAudioPlayButtonStyle : NSObject

@property (retain, nonatomic) LPSize *size;
@property (retain, nonatomic) LPPointUnit *glyphSize;
@property (readonly, retain, nonatomic) LPAudioPlayButtonTheme *defaultTheme;
@property (readonly, retain, nonatomic) LPAudioPlayButtonTheme *appleMusicTheme;
@property (readonly, retain, nonatomic) LPAudioPlayButtonTheme *podcastsTheme;
@property (readonly, retain, nonatomic) LPAudioPlayButtonTheme *audioBookTheme;
@property (readonly, retain, nonatomic) LPAudioPlayButtonTheme *lyricExcerptTheme;

- (id)initWithPlatform:(long long)a0;
- (void).cxx_destruct;

@end
