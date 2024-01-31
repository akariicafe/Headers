@class PRSPosterUpdatePayload;

@interface PRSPosterUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) BOOL updateNecessitatesPosterUpdate;
@property (readonly, nonatomic) PRSPosterUpdatePayload *payload;

+ (id)posterUpdateInlineComplication:(id)a0;
+ (id)posterUpdateHomeScreenGradient:(id)a0;
+ (id)posterUpdateAmbientConfigurationForCreation:(id)a0 deletion:(id)a1 editingBehavior:(id)a2 supportedDataLayout:(id)a3;
+ (id)posterUpdateAmbientWidgets:(id)a0;
+ (id)posterUpdateAssociateWithChargerIdentifier:(id)a0;
+ (id)posterUpdateComplications:(id)a0;
+ (id)posterUpdateDisassociateFromChargerIdentifier:(id)a0;
+ (id)posterUpdateHomeScreenAppearance:(unsigned long long)a0;
+ (id)posterUpdateHomeScreenColor:(id)a0;
+ (id)posterUpdateHomeScreenPosterLegibilityBlurWithValue:(BOOL)a0;
+ (id)posterUpdateHomeScreenPosterProvider:(id)a0 sessionInfo:(id)a1;
+ (id)posterUpdateHomeScreenPosterWithImageAtURL:(id)a0;
+ (id)posterUpdateLegibilityBlurWithValue:(BOOL)a0;
+ (id)posterUpdateLockScreenPosterWithImageAtURL:(id)a0;
+ (id)posterUpdateMirroredHomeScreenLegibilityBlurWithValue:(BOOL)a0;
+ (id)posterUpdatePosterWithSessionInfo:(id)a0;
+ (id)posterUpdateSidebarComplications:(id)a0;
+ (id)posterUpdatesForDecoratedSessionInfo:(id)a0;
+ (id)posterUpdatesForWFWallpaperConfiguration:(id)a0;
+ (id)posterUpdatesForWFWallpaperConfiguration:(id)a0 sessionInfo:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_initWithUpdateType:(unsigned long long)a0 payload:(id)a1;

@end
