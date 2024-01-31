@class NSArray, NSString, NSUUID, CMSAuthenticationCredential, NSURL, NSData, CMSAuthenticationConfiguration;

@interface MediaService : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *serviceName;
@property (copy, nonatomic) NSUUID *serviceID;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSString *serviceType;
@property (retain, nonatomic) CMSAuthenticationConfiguration *authConfiguration;
@property (retain, nonatomic) CMSAuthenticationCredential *authCredential;
@property (nonatomic) BOOL authFatalError;
@property (retain, nonatomic) NSURL *configURL;
@property (copy, nonatomic) NSString *configPublicKey;
@property (copy, nonatomic) NSString *configETag;
@property (retain, nonatomic) NSData *configAsset;
@property (retain, nonatomic) NSURL *iconImageURL;
@property (retain, nonatomic) NSURL *remoteIconURL;
@property (retain, nonatomic) NSArray *alternateBundleIdentifiers;
@property (nonatomic, getter=isServiceRemovable) BOOL serviceRemovable;
@property (nonatomic) BOOL updateListeningHistoryEnabled;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMediaServiceIdentifier:(id)a0;
- (id)_failWithError:(unsigned long long)a0 errorString:(id)a1;
- (id)basicPropertiesDictionary;
- (id)initWithServiceAccount:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;

@end
