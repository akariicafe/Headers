@class NSArray, NSNumber, NSString;

@interface ASProvisionResponse : ASItem {
    NSArray *_policies;
    NSNumber *_status;
    BOOL _remoteWipe;
    BOOL _accountOnlyRemoteWipe;
    NSString *_policyType;
}

+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (void)_setStatus:(id)a0;
- (id)init;
- (id)policies;
- (id)policyType;
- (id)status;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPolicyType:(id)a0;
- (void)setPolicyType:(id)a0;
- (void)_setRemoteWipe:(id)a0;
- (void)_setAccountOnlyRemoteWipe:(id)a0;
- (void)_setPolicies:(id)a0;
- (BOOL)accountOnlyRemoteWipe;
- (id)asParseRules;
- (BOOL)remoteWipe;

@end
