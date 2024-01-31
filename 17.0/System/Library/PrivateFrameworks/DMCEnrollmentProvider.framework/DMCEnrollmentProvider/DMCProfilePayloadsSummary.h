@class NSString, NSArray;

@interface DMCProfilePayloadsSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *managedAppleID;
@property (nonatomic) long long finalInstallationWarningStyle;
@property (retain, nonatomic) NSArray *accountSections;
@property (retain, nonatomic) NSArray *managedAppSections;
@property (retain, nonatomic) NSArray *managedBookSections;
@property (retain, nonatomic) NSArray *moreDetailsSections;
@property (retain, nonatomic) NSArray *restrictionSections;
@property (retain, nonatomic) NSArray *byodInfoSections;
@property (retain, nonatomic) NSArray *payloadInfoSectionSummaries;

+ (id)_localizedPayloadSummaryByType:(id)a0;
+ (void)_addObjectsOfClass:(Class)a0 fromArray:(id)a1 toArray:(id)a2;
+ (id)_installedManagedAppIDs;
+ (BOOL)_isInstalledMDMProfile:(id)a0;
+ (BOOL)_isMDMProfile:(id)a0;
+ (id)_managedBooks;
+ (id)_signedByStringFromProfile:(id)a0;
+ (id)_sortedPayloads:(id)a0;
+ (id)_warningTextFromPayload:(id)a0;
+ (id)summaryForProfile:(id)a0 showManagedPayloads:(BOOL)a1 dataSource:(unsigned long long)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
