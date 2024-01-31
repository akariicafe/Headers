@class NSString, SBSExternalDisplayService, BrightnessSystemClient, NSNumber;

@interface DBSExternalDisplayManager : NSObject <SBSExternalDisplayServiceObserver>

@property (retain, nonatomic) BrightnessSystemClient *brightnessSystemClient;
@property (retain, nonatomic) SBSExternalDisplayService *displayService;
@property (readonly, nonatomic) BOOL externalDisplayAvailable;
@property (readonly, nonatomic) BOOL externalDisplayBrightnessAvailable;
@property (readonly, nonatomic) BOOL externalDisplayAutoBrightnessAvailable;
@property (retain, nonatomic) NSString *currentHDRMode;
@property (nonatomic) BOOL matchContent;
@property (readonly, nonatomic) NSNumber *externalDisplayBrightness;
@property (nonatomic) BOOL autoBrightnessEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (id)init;
- (void)dealloc;
- (void)setMirroringEnabled:(BOOL)a0;
- (id)preferredHDRModes;
- (id)supportedHDRModes;
- (void)externalDisplayDidConnect:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)externalDisplayWillDisconnect:(id)a0;
- (struct CGSize { double x0; double x1; })mainDisplaySize;
- (id)mainDisplayName;
- (BOOL)deviceSupportsChamoisExternalDisplay;
- (id)externalDisplayName;
- (struct CGSize { double x0; double x1; })externalDisplaySize;
- (id)mainDisplayImageWithWidth:(double)a0;
- (void)setExternalDisplayBrightness:(id)a0 shouldCommit:(BOOL)a1;

@end
