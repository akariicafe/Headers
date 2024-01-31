@interface FPNonEvictableItemsQueryDescriptor : FPSpotlightQueryDescriptor

- (id)name;
- (void)augmentQueryContext:(id)a0;
- (unsigned long long)desiredCount;
- (id)queryStringForMountPoint:(id)a0;

@end
