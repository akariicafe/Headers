@class WBWebsiteDataRecord, NSString, NSDate;

@interface WBSettingsTask : NSObject

@property (readonly, nonatomic) long long taskType;
@property (readonly, nonatomic) WBWebsiteDataRecord *websiteDataRecord;
@property (readonly, nonatomic) NSString *profileIdentifier;
@property (readonly, nonatomic) NSDate *afterDate;
@property (readonly, nonatomic) NSDate *beforeDate;
@property (readonly, nonatomic) BOOL clearAllProfiles;

+ (id)taskWithType:(long long)a0;
+ (id)taskForDeletingAllWebsiteDataInProfileWithIdentifier:(id)a0;
+ (id)taskForDeletingHistoryAfterDate:(id)a0 beforeDate:(id)a1 forProfileIdentifier:(id)a2 clearAllProfiles:(BOOL)a3;
+ (id)taskForDeletingIndividualWebsiteDataWithRecord:(id)a0;

- (void).cxx_destruct;
- (id)initWithType:(long long)a0 afterDate:(id)a1 beforeDate:(id)a2 profileIdentifier:(id)a3 clearAllProfiles:(BOOL)a4;
- (id)initWithType:(long long)a0 websiteDataRecord:(id)a1 profileIdentifier:(id)a2;

@end
