@class NSArray, NSMutableDictionary, NSString;

@interface SHCustomCatalogMemoryStorage : NSObject <SHCustomCatalogStorage>

@property (retain, nonatomic) NSMutableDictionary *signatures;
@property (retain, nonatomic) NSMutableDictionary *mediaItems;
@property (readonly, nonatomic) NSArray *referenceSignatures;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addSignature:(id)a0 representingMediaItems:(id)a1;
- (id)jsonObjectRepresentationWithError:(id *)a0;
- (id)mediaItemsForReferenceSignature:(id)a0;
- (void)producedMediaItem:(id)a0 forID:(id)a1;
- (void)producedSignature:(id)a0 forID:(id)a1;
- (id)referenceSignatureForTrackID:(unsigned long long)a0;

@end
