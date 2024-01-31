@class NSString;

@interface VNReadOnlyPersonsModel : VNPersonsModel <VNPersonsModelDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isReadOnly;
+ (id)newModelFromVersion:(unsigned long long)a0 objects:(id)a1 error:(id *)a2;

- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)a0;
- (id)personsModel:(id)a0 faceObservationAtIndex:(unsigned long long)a1 forPersonAtIndex:(unsigned long long)a2;
- (id)faceCountsForAllPersons;
- (id)faceObservationsForPersonWithUniqueIdentifier:(id)a0 error:(id *)a1;
- (unsigned long long)personsModel:(id)a0 indexOfPersonWithUniqueIdentifier:(id)a1;
- (id)personsModel:(id)a0 uniqueIdentifierOfPersonAtIndex:(unsigned long long)a1;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)a0;
- (id)initWithConfiguration:(id)a0 faceModel:(id)a1;
- (BOOL)dropCurrentFaceModelAndReturnError:(id *)a0;
- (unsigned long long)numberOfPersonsInPersonsModel:(id)a0;
- (id)personUniqueIdentifiers;
- (unsigned long long)personsModel:(id)a0 numberOfFaceObservationsForPersonAtIndex:(unsigned long long)a1;
- (unsigned long long)personCount;
- (id)upToDateFaceModelWithCanceller:(id)a0 error:(id *)a1;

@end
