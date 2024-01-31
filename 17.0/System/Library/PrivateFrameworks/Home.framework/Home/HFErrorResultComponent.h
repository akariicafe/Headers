@class HMSymptom, NSString, NSURL;

@interface HFErrorResultComponent : HFItemResultComponent

@property (readonly, nonatomic) unsigned long long category;
@property (retain, nonatomic) HMSymptom *underlyingSymptom;
@property (copy, nonatomic) NSString *errorDescription;
@property (copy, nonatomic) NSString *detailedErrorDescription;
@property (nonatomic) long long displayPriority;
@property (nonatomic) unsigned long long badgeType;
@property (nonatomic) unsigned long long descriptionBadgeType;
@property (copy, nonatomic) NSString *errorMessageTitle;
@property (copy, nonatomic) NSString *errorMessageButtonTitle;
@property (copy, nonatomic) NSURL *errorHandlerURL;
@property (copy, nonatomic) NSString *errorHandlerURLText;
@property (nonatomic) BOOL updateInProgress;

+ (long long)_displayPriorityForSymptom:(id)a0;
+ (BOOL)_requiresManualFixOptionToDisplaySymptom:(id)a0;
+ (id)componentForAccessoryReprovisionState:(unsigned long long)a0;
+ (id)componentForDisplayError:(id)a0 symptomContextProvider:(id)a1;
+ (id)componentForSymptom:(id)a0 contextProvider:(id)a1;
+ (id)componentForUnreachableAccessoryWithContextProvider:(id)a0;
+ (id)componentForWriteErrorForCharacteristics:(id)a0 valueSource:(id)a1;
+ (long long)priorityForCategory:(unsigned long long)a0;

- (id)initWithCategory:(unsigned long long)a0;
- (id)init;
- (id)results;
- (id)description;
- (void).cxx_destruct;
- (void)_addAccountSymptomMessageForAccountName:(id)a0 symptom:(id)a1;
- (long long)componentPriority;

@end
