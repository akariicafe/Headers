@class NSString, _LTLanguageInstallationStatus, NSLocale, _LTAssetProgress;

@interface _LTLanguageAssetModel : NSObject <NSSecureCoding, _LTAssetProgressReporting> {
    NSLocale *_locale;
    NSString *_displayName;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *ltIdentifier;
@property (readonly, copy, nonatomic) NSString *identifierForDownloads;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) _LTLanguageInstallationStatus *installationStatus;
@property (readonly, nonatomic) _LTAssetProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLocale:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocale:(id)a0 progress:(id)a1;
- (id)initWithInstallationStatus:(id)a0;
- (id)initWithLocale:(id)a0 state:(long long)a1;

@end
