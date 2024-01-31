@class NSURL, NSString;

@interface WBSCertificateWarningPageContext : NSObject <NSSecureCoding> {
    NSString *_expiredCertificateDescription;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *failingURL;
@property (readonly, nonatomic) long long warningCategory;
@property (readonly, nonatomic) BOOL canGoBack;
@property (readonly, nonatomic) long long numberOfDaysInvalid;
@property (readonly, nonatomic) NSString *expiredCerticateDescription;
@property (readonly, nonatomic) double clockSkew;

+ (id)permanentAcceptanceConfirmationButtonTitle;
+ (id)permanentAcceptanceConfirmationTitle;
+ (BOOL)certificateWarningCannotBeBypassedForTrust:(struct __SecTrust { } *)a0;
+ (long long)certificateWarningCategoryForError:(id)a0 trustIncludesRevokedCertificate:(BOOL)a1 clockSkew:(double)a2;
+ (long long)numberOfDaysBetweenCertificateValidityRangeAndNow:(id)a0;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initLegacyTLSWarningWithFailingURL:(id)a0 canGoBack:(BOOL)a1;
- (id)initPrivateRelayFailClosedNavigationWarningWithFailingURL:(id)a0 isPrivateRelaySetToTrackersAndWebsites:(BOOL)a1 canGoBack:(BOOL)a2;
- (id)initWithWarningCategory:(long long)a0 failingURL:(id)a1 numberOfDaysInvalid:(long long)a2 canGoBack:(BOOL)a3 clockSkew:(double)a4;

@end
