@class PHPhotoLibrary, CLSPersonIdentity;

@interface CLSInputPeopleClue : CLSInputClue

@property (retain, nonatomic) CLSPersonIdentity *person;
@property (weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) unsigned long long numberOfFaces;
@property (nonatomic) BOOL includeMergeCandidates;

+ (id)clueWithPeople:(id)a0;
+ (id)clueWithPersonContactIdentifier:(id)a0 inPhotoLibrary:(id)a1;
+ (id)clueWithPersonLocalIdentifier:(id)a0 inPhotoLibrary:(id)a1;
+ (id)cluesWithPeoples:(id)a0;
+ (id)cluesWithPersonLocalIdentifiers:(id)a0 inPhotoLibrary:(id)a1;
+ (id)clueWithConsolidatedPersonLocalIdentifier:(id)a0 inPhotoLibrary:(id)a1;
+ (id)cluesWithConsolidatedPersonLocalIdentifiers:(id)a0 inPhotoLibrary:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)name;
- (void)_prepareWithProgressBlock:(id /* block */)a0;
- (BOOL)isEqualToClue:(id)a0;

@end
