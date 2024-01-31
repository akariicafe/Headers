@class NSString;

@interface CRKASMConcreteNameComponents : NSObject <CRKASMNameComponents>

@property (readonly, copy, nonatomic) NSString *givenName;
@property (readonly, copy, nonatomic) NSString *phoneticGivenName;
@property (readonly, copy, nonatomic) NSString *familyName;
@property (readonly, copy, nonatomic) NSString *phoneticFamilyName;
@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, copy, nonatomic) NSString *phoneticFullName;
@property (readonly, copy, nonatomic) NSString *monogram;
@property (readonly, copy, nonatomic) NSString *givenNameFamilyInitial;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedFormatter;
+ (id)makeFullNameWithComponents:(id)a0;
+ (id)makeGivenNameFamilyInitialWithComponents:(id)a0;
+ (id)makeMonogramWithComponents:(id)a0;
+ (id)makeNameComponentsForPerson:(id)a0;
+ (id)makePhoneticFullNameWithComponents:(id)a0;
+ (id)stringFromNameComponents:(id)a0 configurationBlock:(id /* block */)a1 cleanupBlock:(id /* block */)a2;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPerson:(id)a0;

@end
