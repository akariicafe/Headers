@class NSString, NSArray, NSNumber;

@interface AALoginResponseAppleAccountInfo : NSObject

@property (readonly, nonatomic) NSString *personID;
@property (readonly, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) NSString *appleID;
@property (readonly, nonatomic) NSArray *appleIDAliases;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *primaryEmail;
@property (readonly, nonatomic) NSNumber *primaryEmailVerified;
@property (readonly, nonatomic) NSNumber *cloudDocsMigrated;
@property (readonly, nonatomic) NSNumber *notesMigrated;
@property (readonly, nonatomic) NSNumber *remindersMigrated;
@property (readonly, nonatomic) NSNumber *remindersAutoMigratableToCK;
@property (readonly, nonatomic, getter=isManagedAppleID) BOOL managedAppleID;
@property (readonly, nonatomic, getter=isSandboxAccount) BOOL sandboxAccount;
@property (readonly, nonatomic, getter=hasOptionalTerms) BOOL optionalTerms;
@property (readonly, nonatomic, getter=isFamilyEligible) BOOL familyEligible;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
