@class NSArray, CNUICoreContactTypeAssessor;

@interface CNUICoreFamilyMemberContactsModelBuilder : NSObject

@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) CNUICoreContactTypeAssessor *contactTypeAssessor;
@property (nonatomic) long long contactFormatterStyle;
@property (nonatomic) BOOL includeWhitelistedContactsOnly;
@property (nonatomic) BOOL sortItemsByName;
@property (nonatomic) BOOL markItemsAsPersisted;
@property (nonatomic) BOOL markItemsAsProposed;

+ (id)uniqueFamilyMemberContactItems:(id)a0;
+ (id)familyMemberContactItemFromContact:(id)a0 contactFormatterStyle:(long long)a1 contactTypeAssessor:(id)a2 itemHasBeenPersisted:(BOOL)a3 itemIsProposed:(BOOL)a4;
+ (id)firstDisplayableEmailAddressForContact:(id)a0;
+ (id)firstDisplayablePhoneNumberForContact:(id)a0;
+ (id)formattedNameOfContact:(id)a0 contactFormatterStyle:(long long)a1;
+ (id)itemsBySortingItems:(id)a0;
+ (id)placeholderNameForNamelessContact:(id)a0;
+ (BOOL)shouldIncludeContact:(id)a0 givenIncludeWhitelistedContactsOnlySetting:(BOOL)a1;

- (id)init;
- (id)build;
- (void).cxx_destruct;
- (id)sortedFamilyMemberContactItems:(id)a0;

@end
