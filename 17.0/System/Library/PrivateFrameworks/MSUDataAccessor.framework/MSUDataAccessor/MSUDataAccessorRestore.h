@interface MSUDataAccessorRestore : MSUDataAccessor

- (id)copyMountPointForVolumeType:(int)a0 error:(id *)a1;
- (id)specialCaseAPTicketForRamdiskWithError:(id *)a0;
- (id)findVolumesWithRole:(int)a0;
- (id)getVolumeWithUUID:(id)a0;
- (id)copyPathForPersonalizedData:(int)a0 error:(id *)a1;

@end
