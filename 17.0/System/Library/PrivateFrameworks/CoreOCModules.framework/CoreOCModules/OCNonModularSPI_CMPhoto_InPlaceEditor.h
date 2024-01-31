@class NSArray, NSDictionary, NSData, NSString;

@interface OCNonModularSPI_CMPhoto_InPlaceEditor : NSObject <CMPhotoInPlaceHEIFEditorDelegate>

@property (retain) NSData *modifiedXMP;
@property (retain) NSDictionary *modifiedCustom;
@property (retain) NSArray *modifiedExtrinsicsPosition;
@property (retain) NSArray *modifiedExtrinsicsRotation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (int)extrinsics:(id)a0 forIndex:(long long)a1 modifiedExtrinsics:(id *)a2;
- (int)metadataPayload:(id)a0 forImageIndex:(long long)a1 payloadIndex:(long long)a2 withType:(unsigned long long)a3 customMetadataIdentifier:(id)a4 modifiedData:(id *)a5;
- (BOOL)shouldModifyMetadataForImageIndex:(long long)a0 payloadIndex:(long long)a1 withType:(unsigned long long)a2 customMetadataIdentifier:(id)a3;
- (void)updateModifiedCustom:(id)a0;
- (void)updateModifiedExtrinsicsPosition:(id)a0 rotation:(id)a1;
- (void)updateModifiedXMP:(id)a0;

@end
