@class WBSGlobalFrameIdentifier, NSString, NSSet, NSURL, WBSAutoFillAssociatedDomainsManager, NSData, WBSSavedAccountContext;

@interface WBSSavedAccountMatchCriteria : NSObject

@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *partialUsername;
@property (copy, nonatomic) WBSSavedAccountContext *context;
@property (retain, nonatomic) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager;
@property (copy, nonatomic) NSData *passkeyCredentialIdentifier;
@property (readonly, nonatomic) WBSGlobalFrameIdentifier *webFrameIdentifier;
@property (readonly, nonatomic) BOOL queryShouldOmitAutoFillPasskeyMatches;
@property (readonly, nonatomic) BOOL queryShouldReturnSavedAccountsMatchingHighLevelAndSimplifiedDomains;
@property (readonly, nonatomic) BOOL queryShouldReturnSavedAccountsMatchingAssociatedDomains;
@property (readonly, nonatomic) BOOL queryShouldReturnSavedAccountsWithEmptyUsernames;
@property (readonly, nonatomic) BOOL queryShouldIncludePasskeyMatchesForNonAutoFillContext;
@property (readonly, nonatomic) BOOL queryShouldIncludeSavedAccountsWithDoNotSaveMarkers;
@property (readonly, nonatomic) NSSet *associatedDomainsForURL;

+ (id)criteriaForExactFQDNPasswordMatchesOfURL:(id)a0;
+ (id)criteriaForNonAutofillablePasskeyWithCredentialIdentifier:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1 partialUsername:(id)a2 associatedDomainsManager:(id)a3 webFrameIdentifier:(id)a4;
- (id)_optionsDescription;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1 partialUsername:(id)a2 passkeyCredentialIdentifier:(id)a3 associatedDomainsManager:(id)a4 webFrameIdentifier:(id)a5;

@end
