@class VNPersonsModelAlgorithm, VNPersonsModelFaceModel, VNPersonsModelConfiguration;
@protocol VNPersonsModelDataSource;

@interface VNPersonsModel : NSObject {
    VNPersonsModelFaceModel *_faceModel_DO_NOT_ACCESS_DIRECTLY;
    VNPersonsModelConfiguration *_configuration;
    id<VNPersonsModelDataSource> _dataSource;
    unsigned long long _lastDataChangeSequenceNumber;
}

@property (readonly, copy, nonatomic) VNPersonsModelAlgorithm *algorithm;
@property (readonly, copy, nonatomic) VNPersonsModelConfiguration *configuration;

+ (BOOL)isReadOnly;
+ (id)newModelFromVersion:(unsigned long long)a0 objects:(id)a1 error:(id *)a2;
+ (id)configurationFromLoadedObjects:(id)a0 error:(id *)a1;
+ (id)informationForModelWithData:(id)a0 error:(id *)a1;
+ (id)informationForModelWithURL:(id)a0 error:(id *)a1;
+ (id)modelFromData:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)modelFromStream:(id)a0 options:(id)a1 error:(id *)a2;
+ (id)modelFromURL:(id)a0 options:(id)a1 error:(id *)a2;
+ (BOOL)readObjectForModelVersion:(unsigned long long)a0 tag:(unsigned int)a1 fromInputStream:(id)a2 intoObjectDictionary:(id)a3 md5Context:(struct CC_MD5state_st { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6[16]; int x7; } *)a4 error:(id *)a5;
+ (id)supportedReadVersions;
+ (id)versionNumbersEncodedInClass:(Class)a0 withMethodNamePrefix:(id)a1 suffix:(id)a2;

- (unsigned long long)faceCountForPersonWithUniqueIdentifier:(id)a0;
- (id)faceCountsForAllPersons;
- (id)faceObservationsForPersonWithUniqueIdentifier:(id)a0 error:(id *)a1;
- (id)faceCountsForPersonsWithUniqueIdentifiers:(id)a0;
- (id)description;
- (BOOL)dropCurrentFaceModelAndReturnError:(id *)a0;
- (void).cxx_destruct;
- (id)personUniqueIdentifiers;
- (unsigned long long)personCount;
- (id)upToDateFaceModelWithCanceller:(id)a0 error:(id *)a1;
- (BOOL)convertToAlgorithm:(id)a0 error:(id *)a1;
- (id)initWithConfiguration:(id)a0 dataSource:(id)a1;
- (id)predictPersonFromFaceObservation:(id)a0 limit:(unsigned long long)a1 canceller:(id)a2 error:(id *)a3;
- (id)trainingFaceObservationsForPersonWithUniqueIdentifier:(id)a0 canceller:(id)a1 error:(id *)a2;
- (id)trainingFaceprintsForPersonWithUniqueIdentifier:(id)a0 canceller:(id)a1 error:(id *)a2;
- (BOOL)updateInternalConfigurationWithModelFaceprintRequestRevision:(unsigned long long)a0 error:(id *)a1;

@end
