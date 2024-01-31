@class NSArray, NSString;

@interface AMSDeviceOfferRegistrationGroup : NSObject <AMSStorageDatabasePersistable>

@property (readonly, nonatomic) NSArray *registrationItems;
@property (nonatomic) unsigned long long validationOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithRegistrationItems:(id)a0 validationOptions:(unsigned long long)a1;
- (BOOL)_serialsMatchSerialsFromGroup:(id)a0;
- (id)initWithDatabaseEntry:(id)a0;
- (id)initWithRegistrationItems:(id)a0;
- (BOOL)isEqualToRegistrationGroup:(id)a0;
- (BOOL)isModifiedVersionOfGroup:(id)a0;
- (id)serializeToDictionary;

@end
