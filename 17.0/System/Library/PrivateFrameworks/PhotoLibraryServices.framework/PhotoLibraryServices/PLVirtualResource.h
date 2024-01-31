@class NSString, NSURL, NSDate, PLUniformTypeIdentifier;
@protocol PLResourceDataStore, PLResourceDataStoreKey, PLAssetID;

@interface PLVirtualResource : NSObject <PLWriteableResource, PLValidatesResourceModel> {
    BOOL _isMarkedFullSize;
    BOOL _isLosslessEncoded;
    long long _assetWidth;
    long long _assetHeight;
}

@property (readonly, nonatomic) NSURL *fileURL;
@property (nonatomic) unsigned int resourceType;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int recipeID;
@property (retain, nonatomic) id<PLResourceDataStore> dataStore;
@property (nonatomic) long long dataStoreSubtype;
@property (retain, nonatomic) id<PLResourceDataStoreKey> dataStoreKey;
@property (nonatomic) short remoteAvailability;
@property (nonatomic) float scale;
@property (nonatomic) long long unorientedWidth;
@property (nonatomic) long long unorientedHeight;
@property (retain, nonatomic) NSString *codecFourCharCodeName;
@property (retain, nonatomic) PLUniformTypeIdentifier *uniformTypeIdentifier;
@property (readonly, nonatomic) unsigned int orientation;
@property (readonly, nonatomic) long long orientedWidth;
@property (readonly, nonatomic) long long orientedHeight;
@property (readonly, copy, nonatomic) id<PLAssetID> assetID;
@property (readonly, nonatomic) unsigned long long cplType;
@property (readonly, nonatomic) short localAvailability;
@property (readonly, nonatomic) short localAvailabilityTarget;
@property (readonly, nonatomic) short remoteAvailabilityTarget;
@property (readonly, nonatomic) int qualitySortValue;
@property (readonly, nonatomic) long long dataLength;
@property (readonly, nonatomic) long long estimatedDataLength;
@property (readonly, nonatomic) short trashedState;
@property (readonly, nonatomic) NSDate *trashedDate;
@property (readonly, nonatomic) short utiConformanceHint;
@property (readonly, nonatomic) BOOL isOriginalResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDerivative;
- (id)validateForAssetID:(id)a0 resourceIdentity:(id)a1;
- (BOOL)isVirtual;
- (float)scaleGivenAssetHasAdjustments:(BOOL)a0 currentWidth:(long long)a1 currentHeight:(long long)a2;
- (BOOL)isPlayableVideo;
- (long long)orientedWidth;
- (BOOL)isInCloud;
- (unsigned long long)cplType;
- (long long)orientedHeight;
- (BOOL)isDefaultOrientation;
- (void).cxx_destruct;
- (id)photosCTLJSONDict;
- (long long)dataLength;
- (id)singleLineDescription;
- (int)qualitySortValue;
- (long long)estimatedDataLength;
- (id)initWithAsset:(id)a0 resourceType:(unsigned int)a1 version:(unsigned int)a2 recipeID:(unsigned int)a3;
- (id)initWithRecipe:(id)a0 forAsset:(id)a1;

@end
