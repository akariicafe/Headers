@class NSString, NSArray;

@interface NNMKSyncedAccount : NSObject

@property (retain, nonatomic) NSString *accountId;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL shouldArchive;
@property (retain, nonatomic) NSArray *emailAddresses;
@property (retain, nonatomic) NSString *defaultEmailAddress;
@property (nonatomic) BOOL resendRequested;
@property (nonatomic) unsigned long long resendInterval;
@property (nonatomic) unsigned long long sourceType;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *localId;
@property (retain, nonatomic) NSString *typeIdentifier;
@property (retain, nonatomic) NSString *emailAddressToken;
@property (retain, nonatomic) NSString *pccEmailAddress;

- (id)init;
- (id)initWithAccount:(id)a0;
- (id)account;
- (void).cxx_destruct;

@end
