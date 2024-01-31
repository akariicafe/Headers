@class NSDictionary, CKVLocalization, CKVSearchContext;

@interface CKVSettings : NSObject <NSSecureCoding> {
    _Atomic unsigned char _enablementOptions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSDictionary *simulatedPriors;
@property (readonly, nonatomic) CKVSearchContext *searchContext;
@property (readonly) CKVLocalization *localization;

+ (id)defaultSettings;
+ (void)enableXPCDonationGlobalOverride;
+ (BOOL)_isDonationEnabled:(unsigned char)a0;
+ (BOOL)_isSandboxEnabled:(unsigned char)a0;
+ (BOOL)_isSpeechProfileEnabled:(unsigned char)a0;
+ (unsigned char)defaultEnablementOptions;
+ (id)defaultSandboxSettings;
+ (void)disableXPCDonationGlobalOverride;
+ (BOOL)isDonationEnabled:(unsigned char)a0;
+ (BOOL)isSkitEnabled:(unsigned char)a0;
+ (id)sandboxSettingsWithLocale:(id)a0 error:(id *)a1;

- (BOOL)isSkitEnabled;
- (id)init;
- (BOOL)isSpeechProfileEnabled;
- (unsigned char)enablementOptions;
- (void)setEvaluationWithProfile:(BOOL)a0;
- (BOOL)isSpeechProfileEnabledForAssistant;
- (BOOL)isXPCDonationEnabled:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEvaluationEnabled;
- (void)refreshEnablementOptions;
- (BOOL)shouldOverrideSpeechProfileDeferral;
- (BOOL)isTaskEnabled:(unsigned short)a0 isAdmin:(BOOL)a1;
- (BOOL)isEvaluationWithProfile;
- (BOOL)isSandboxEnabled;
- (void)setEvaluationEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isSpeechProfileEnabledForDictation;
- (id)initWithLocalization:(id)a0 enablementOptions:(unsigned char)a1;
- (void)refreshLocalization;
- (id)initWithCoder:(id)a0;

@end
