@interface IPAVideoAdjustmentStackSerializer_v10 : IPAVideoAdjustmentStackSerializer

- (id)archiveFromData:(id)a0 error:(id *)a1;
- (id)dataFromArchive:(id)a0 error:(id *)a1;
- (id)dataFromVideoAdjustmentStack:(id)a0 error:(id *)a1;
- (id)videoAdjustmentFromArchive:(id)a0 error:(id *)a1;
- (id)videoAdjustmentStackFromData:(id)a0 error:(id *)a1;

@end
