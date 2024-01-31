@class NSSet, NSString, NSNumber;

@interface RMModelStatusAccountListGoogle : RMModelStatusBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusIdentifier;
@property (copy, nonatomic) NSNumber *statusRemoved;
@property (copy, nonatomic) NSString *statusDeclarationIdentifier;
@property (copy, nonatomic) NSString *statusVisibleName;
@property (copy, nonatomic) NSString *statusUsername;
@property (copy, nonatomic) NSNumber *statusIsMailEnabled;
@property (copy, nonatomic) NSNumber *statusAreCalendarsEnabled;
@property (copy, nonatomic) NSNumber *statusAreContactsEnabled;
@property (copy, nonatomic) NSNumber *statusAreNotesEnabled;

+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 removed:(id)a1 declarationIdentifier:(id)a2 visibleName:(id)a3 username:(id)a4 isMailEnabled:(id)a5 areCalendarsEnabled:(id)a6 areContactsEnabled:(id)a7 areNotesEnabled:(id)a8;
+ (BOOL)isArrayValue;
+ (id)statusItemType;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
