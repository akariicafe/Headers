@class NSSet, NSMutableDictionary, NSString, PNVisionHelper;
@protocol PNPhotoLibraryProtocol, PNPersonPromoterDelegate;

@interface PNPersonClusterManager : NSObject <PNPhotoLibraryProtocol> {
    NSMutableDictionary *_representativeFaceObservationForPersonIdentifier;
    NSMutableDictionary *_distancesForPersonLocalIdentifier;
    NSMutableDictionary *_distancesInCommonMomentsForPersonLocalIdentifier;
    NSMutableDictionary *_confidencesForMergedPersonLocalIdentifier;
    id<PNPersonPromoterDelegate> _promoterDelegate;
    BOOL _vuDistanceSPIEnabled;
}

@property (retain, nonatomic) id<PNPhotoLibraryProtocol> photoLibrary;
@property (retain, nonatomic) PNVisionHelper *visionHelper;
@property (retain, nonatomic) NSMutableDictionary *personClusters;
@property (retain, nonatomic) NSSet *assetsToIgnore;
@property (nonatomic) short detectionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)momentSortDescriptors;
+ (id)assetSortDescriptors;
+ (id)personProcessingSortDescriptors;
+ (id)faceGroupSortDescriptors;
+ (id)faceSortDescriptors;
+ (id)nodeSortDescriptors;
+ (id)peopleSortDescriptors;

- (void)clearCaches;
- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (void)mergePersons:(id)a0 withPerson:(id)a1;
- (id)pn_fetchMoments;
- (BOOL)pn_performChangesAndWait:(id /* block */)a0 error:(id *)a1;
- (float)pn_faceProcessingProgress;
- (id)pn_fetchAssetsForFaceGroup:(id)a0;
- (id)pn_fetchAssetsForFaceLocalIdentifiers:(id)a0;
- (id)pn_fetchAssetsForPerson:(id)a0;
- (id)pn_fetchAssetsInMoment:(id)a0;
- (id)pn_fetchAssetsWithLocalIdentifiers:(id)a0;
- (id)pn_fetchCandidatePersonsForPerson:(id)a0;
- (id)pn_fetchFaceGroups;
- (id)pn_fetchFaceGroupsForPerson:(id)a0;
- (id)pn_fetchFacesForFaceGroup:(id)a0;
- (id)pn_fetchFacesForPerson:(id)a0;
- (id)pn_fetchFacesForPerson:(id)a0 inMoment:(id)a1;
- (id)pn_fetchFacesForPersonLocalIdentifiers:(id)a0 inMoment:(id)a1;
- (id)pn_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)a0;
- (id)pn_fetchFacesWithLocalIdentifiers:(id)a0;
- (id)pn_fetchInvalidAssetIdentifiersForCommonComparison;
- (id)pn_fetchInvalidCandidatePersonsForPerson:(id)a0;
- (id)pn_fetchMomentsForAssetsWithLocalIdentifiers:(id)a0;
- (id)pn_fetchMomentsForPerson:(id)a0;
- (id)pn_fetchMomentsWithLocalIdentifiers:(id)a0;
- (id)pn_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)a0;
- (id)pn_fetchPersonsInMoment:(id)a0;
- (id)pn_fetchPersonsWithLocalIdentifiers:(id)a0;
- (id)pn_fetchPersonsWithType:(unsigned long long)a0;
- (id)pn_lastAssetDate;
- (unsigned long long)pn_numberOfFacesWithFaceprints;
- (id)pn_persistentStorageDirectoryURL;
- (float)_adjustDistanceFactorForPerson:(id)a0 andPerson:(id)a1 forAgeType:(unsigned short)a2 andAgeType:(unsigned short)a3;
- (id)_mapPersonClustersToFaceGroups:(id)a0;
- (id)_mapPersonClustersToPersons:(id)a0;
- (float)_minimiumDistanceRequiredForCommonAssetDistanceForAgeType:(unsigned short)a0;
- (id)_representativeFaceObservationForPerson:(id)a0 ageType:(unsigned short *)a1 inAssetCollections:(id)a2;
- (float)animalprintBasedDistanceBetweenPetFaces:(id)a0 andPetFaces:(id)a1;
- (long long)assetsOverlapBetweenPerson:(id)a0 andPerson:(id)a1;
- (long long)assetsOverlapBetweenPersonAssetIdentifiers:(id)a0 andPersonAssetIdentifiers:(id)a1;
- (float)distanceBetweenHuman:(id)a0 andHuman:(id)a1 useCommonMoments:(BOOL)a2 minAgeType:(unsigned short *)a3 updateBlock:(id /* block */)a4 error:(id *)a5;
- (float)distanceBetweenPerson:(id)a0 andPerson:(id)a1 useCommonMoments:(BOOL)a2 minAgeType:(unsigned short *)a3 updateBlock:(id /* block */)a4 error:(id *)a5;
- (float)distanceBetweenPet:(id)a0 andPet:(id)a1 useCommonMoments:(BOOL)a2;
- (float)distanceBetweenPetFaces:(id)a0 andPetFaces:(id)a1;
- (float)distanceWithOverlapCheckBetweenPerson:(id)a0 andPerson:(id)a1 useCommonMoments:(BOOL)a2 minAgeType:(unsigned short *)a3 updateBlock:(id /* block */)a4 error:(id *)a5;
- (id)initWithPhotoLibrary:(id)a0 detectionType:(short)a1 promoterDelegate:(id)a2;
- (void)invalidateCachesForPerson:(id)a0;
- (float)mergeConfidenceBetweenPersonLocalIdentifier:(id)a0 andCandidateLocalIdentifiers:(id)a1;
- (unsigned short)minAgeTypeForFaceAgeType:(unsigned short)a0 andFaceAgeType:(unsigned short)a1;
- (float)momentBasedDistanceBetweenPet:(id)a0 andPet:(id)a1;
- (unsigned long long)numberOfAssetsInCommonBetweenPerson:(id)a0 andPerson:(id)a1;
- (unsigned long long)numberOfAssetsInCommonBetweenPersonAssetIdentifiers:(id)a0 andPersonAssetIdentifiers:(id)a1;
- (unsigned long long)numberOfMomentsInCommonBetweenPerson:(id)a0 andPerson:(id)a1;
- (id)representativeFaceObservationForFaces:(id)a0 ageType:(unsigned short *)a1 inPerson:(id)a2;
- (id)representativeFaceObservationForPerson:(id)a0 ageType:(unsigned short *)a1;
- (void)updateConfidenceCacheBetweenPersonLocalIdentifier:(id)a0 andOtherPersonLocalIdentifier:(id)a1 withDistance:(double)a2;

@end
