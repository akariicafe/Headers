@class PHMemory, NSString, PHAsset, PHPhotoLibrary, PHUserFeedbackCalculator;

@interface PGPotentialUpNextMemory : NSObject <PGPotentialUpNextMemoryProtocol> {
    PHPhotoLibrary *_photoLibrary;
    PHUserFeedbackCalculator *_userFeedbackCalculator;
    BOOL _noKeyAsset;
    PHAsset *_keyAsset;
}

@property (readonly, nonatomic) PHMemory *memory;
@property (readonly, nonatomic) NSString *memoryLocalIdentifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) PHAsset *keyAsset;
@property (readonly, nonatomic) NSString *keyAssetLocalIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMemory:(id)a0 photoLibrary:(id)a1 userFeedbackCalculator:(id)a2;
- (BOOL)isBlockedByUserFeedback;

@end
