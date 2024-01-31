@class AFBBufferBuilder;

@interface TRIFBCloudKitTreatmentRecordAssetBuilder : NSObject {
    AFBBufferBuilder *_owner;
    struct CloudKitTreatmentRecordAssetBuilder { struct FlatBufferBuilder *x0; unsigned int x1; } *_bldr;
}

- (id)init;
- (void)dealloc;
- (void)setContainer:(unsigned char)a0;
- (void).cxx_destruct;
- (void)setTreatmentId:(id)a0;
- (void)setAssetIndex:(unsigned int)a0;
- (void)setHasCkIndex:(BOOL)a0;

@end
