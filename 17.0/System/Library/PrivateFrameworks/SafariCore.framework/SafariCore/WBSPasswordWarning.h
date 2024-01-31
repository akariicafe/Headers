@class WBSPasswordEvaluation, NSString, WBSSavedAccount, NSArray;

@interface WBSPasswordWarning : NSObject {
    WBSPasswordEvaluation *_weakPasswordEvaluation;
    NSArray *_domainsWithReusedPassword;
}

@property (nonatomic) unsigned long long severityScore;
@property (readonly, nonatomic) WBSSavedAccount *savedAccount;
@property (readonly, nonatomic) unsigned long long issueTypes;
@property (readonly, nonatomic) unsigned long long severity;
@property (readonly, nonatomic) unsigned long long hashForUserAcknowlegement;
@property (readonly, nonatomic) BOOL shouldShowWarningsWhenLoggingIn;
@property (readonly, nonatomic) BOOL hasBeenHidden;
@property (readonly, nonatomic) NSString *localizedShortDescriptivePhrase;
@property (readonly, nonatomic) NSString *localizedShortDescriptionOfProblemType;
@property (readonly, nonatomic) NSString *localizedInformationTextForWarningWhenLoggingIn;
@property (readonly, nonatomic) NSString *localizedAlertWarningForSharingReusedPassword;

- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)localizedLongDescriptionForClient:(unsigned long long)a0;
- (id)_localizedLongWarningStringsForClient:(unsigned long long)a0;
- (id)_localizedShortDescriptionWithFullDescriptivePhrase:(BOOL)a0;
- (unsigned long long)_passwordVisibilityForClient:(unsigned long long)a0;
- (id)initWithSavedAccount:(id)a0 issueTypes:(unsigned long long)a1 weakPasswordEvaluation:(id)a2 domainsWithReusedPassword:(id)a3;

@end
