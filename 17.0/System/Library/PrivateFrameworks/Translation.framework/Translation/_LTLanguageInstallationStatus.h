@class NSString, _LTAssetProgress;

@interface _LTLanguageInstallationStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *localeIdentifier;
@property (retain, nonatomic) _LTAssetProgress *progress;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)offlineState;
- (id)initWithLocaleIdentifier:(id)a0 offlineState:(long long)a1;
- (id)initWithLocaleIdentifier:(id)a0 progress:(id)a1;

@end
