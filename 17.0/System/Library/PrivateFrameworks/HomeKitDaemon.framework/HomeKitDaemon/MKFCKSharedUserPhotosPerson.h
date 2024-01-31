@class NSString, NSUUID, MKFCKSharedUserDataRoot;

@interface MKFCKSharedUserPhotosPerson : MKFCKSharedUserData <MKFPersonHMPersonTransformable>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSUUID *photoLibraryPersonUUID;
@property (retain, nonatomic) MKFCKSharedUserDataRoot *root;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;

- (id)createHMPerson;
- (void)updateWithHMPerson:(id)a0;

@end
