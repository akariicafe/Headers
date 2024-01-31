@class _LTLocalePair, NSUUID;

@interface _LTSELFLoggingTranslateAppContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long displayMode;
@property (readonly, copy, nonatomic) _LTLocalePair *localePair;
@property (readonly, nonatomic) BOOL isGenderAlternativeEnabled;
@property (readonly, nonatomic) long long tabName;
@property (readonly, copy, nonatomic) NSUUID *tabSessionId;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDisplayMode:(long long)a0 localePair:(id)a1 isGenderAlternativeEnabled:(BOOL)a2 tabName:(long long)a3 tabSessionId:(id)a4;

@end
