@class AMSMetricsIdentifierStore, NSString, ACAccount, AMSProcessInfo;

@interface AMSMetricsIdentifier : NSObject {
    AMSMetricsIdentifierStore *_store;
}

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) double duration;

+ (void)removeIdentifiersForAccount:(id)a0;
+ (void)cleanupIdentifiers;
+ (id)clientIdKey;

- (id)init;
- (id)generateEventFields;
- (void).cxx_destruct;
- (id)generateIdentifier;

@end
