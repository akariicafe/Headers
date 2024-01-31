@class NSUUID, MKFCKHomePerson, MKFCKUser;

@interface MKFCKPhotosPerson : MKFCKPerson

@property (copy, nonatomic) NSUUID *photoLibraryPersonUUID;
@property (retain, nonatomic) MKFCKHomePerson *linkedHomePerson;
@property (retain, nonatomic) MKFCKUser *user;

+ (id)fetchRequest;
+ (id)rootKeyPath;

- (id)home;
- (void)setHome:(id)a0;
- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)validateUser:(id *)a0 error:(id *)a1;

@end
