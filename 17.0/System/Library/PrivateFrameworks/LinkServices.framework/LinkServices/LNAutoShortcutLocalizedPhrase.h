@class NSString, NSUUID, NSXPCConnection;

@interface LNAutoShortcutLocalizedPhrase : NSObject <NSSecureCoding> {
    NSXPCConnection *_connection;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *localizedPhrase;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *basePhraseTemplate;
@property (readonly, copy, nonatomic) NSUUID *parameterIdentifier;
@property (readonly, copy, nonatomic) NSString *optionsCollectionTitle;
@property (readonly, copy, nonatomic) NSString *optionsCollectionSystemImageName;
@property (readonly, nonatomic, getter=isPrimary) BOOL primary;
@property (readonly, nonatomic) NSString *signature;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithLocalizedPhrase:(id)a0 bundleIdentifier:(id)a1 basePhraseTemplate:(id)a2 parameterIdentifier:(id)a3;
- (id)initWithLocalizedPhrase:(id)a0 bundleIdentifier:(id)a1 basePhraseTemplate:(id)a2 parameterIdentifier:(id)a3 optionsCollectionTitle:(id)a4 optionsCollectionSystemImageName:(id)a5 primary:(BOOL)a6 signature:(id)a7;
- (id)initWithLocalizedPhrase:(id)a0 bundleIdentifier:(id)a1 basePhraseTemplate:(id)a2 parameterIdentifier:(id)a3 primary:(BOOL)a4;
- (id)initWithLocalizedPhrase:(id)a0 bundleIdentifier:(id)a1 basePhraseTemplate:(id)a2 parameterIdentifier:(id)a3 primary:(BOOL)a4 signature:(id)a5;

@end
