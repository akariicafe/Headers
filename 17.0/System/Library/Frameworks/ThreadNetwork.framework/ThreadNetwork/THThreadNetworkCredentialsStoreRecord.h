@class NSUUID, NSString, THThreadNetwork, NSDate, THThreadNetworkCredentials;

@interface THThreadNetworkCredentialsStoreRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) THThreadNetwork *network;
@property (readonly, nonatomic) THThreadNetworkCredentials *credentials;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSString *keychainAccessGroup;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *lastModificationDate;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNetwork:(id)a0 credentials:(id)a1 uniqueIdentifier:(id)a2 keychainAccessGroup:(id)a3 creationDate:(id)a4 lastModificationDate:(id)a5;

@end
