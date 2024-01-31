@interface LPFaceTimeInviteMetadataProviderSpecialization : LPMetadataProviderSpecialization

+ (unsigned long long)specialization;
+ (id)specializedMetadataProviderForURLWithContext:(id)a0;

- (void)start;
- (void)completeWithMetadata:(id)a0;

@end
