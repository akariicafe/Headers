@interface IPAPhotoAdjustmentStackSerializer_v10 : IPAPhotoAdjustmentStackSerializer

- (id)archiveFromData:(id)a0 error:(id *)a1;
- (id)dataFromArchive:(id)a0 error:(id *)a1;
- (id)dataFromPhotoAdjustmentStack:(id)a0 error:(id *)a1;
- (id)photoAdjustmentFromArchive:(id)a0 error:(id *)a1;
- (id)photoAdjustmentStackFromData:(id)a0 error:(id *)a1;

@end
