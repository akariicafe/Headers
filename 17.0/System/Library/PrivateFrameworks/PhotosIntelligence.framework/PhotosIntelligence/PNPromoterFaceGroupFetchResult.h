@class NSArray, PHPhotoLibrary;

@interface PNPromoterFaceGroupFetchResult : NSObject <PNFetchResultProtocol> {
    NSArray *_faceGroups;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSArray *fetchedObjects;
@property (readonly) NSArray *fetchedObjectIDs;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithFaceGroups:(id)a0;

@end
