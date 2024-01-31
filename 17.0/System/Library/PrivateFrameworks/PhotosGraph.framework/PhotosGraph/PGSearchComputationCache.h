@class NSURL, NSMutableDictionary, PHPhotoLibrary;

@interface PGSearchComputationCache : NSObject

@property (readonly, nonatomic) NSURL *persistentStoreURL;
@property (readonly, nonatomic) NSMutableDictionary *momentAssetPairsByNodeUUID;
@property (readonly, nonatomic) NSMutableDictionary *curationInformationByNodeUUID;
@property (readonly, nonatomic) NSMutableDictionary *locationInformationByNodeUUID;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

+ (id)persistentStoreURLWithManager:(id)a0;

- (void)invalidateCache;
- (void)save;
- (void).cxx_destruct;
- (void)setCurationInformation:(id)a0 forNode:(id)a1;
- (id)curationInformationForNode:(id)a0;
- (id)initWithPersistentStoreURL:(id)a0 photoLibrary:(id)a1;
- (id)keyAssetLocalIdentifierForNodeIdentifier:(id)a0 withAssociatedMomentUUIDs:(id)a1;
- (id)locationInformationForLocationNode:(id)a0 locationMask:(unsigned long long)a1;
- (BOOL)momentAssetPairs:(id)a0 areValidWithAssociatedMomentUUIDs:(id)a1;
- (void)setKeyAssetLocalIdentifier:(id)a0 forNodeIdentifier:(id)a1 withAssociatedMomentUUID:(id)a2;
- (void)setLocationInformation:(id)a0 forLocationNode:(id)a1 locationMask:(unsigned long long)a2;

@end
