@interface GEOAnalyticsDataServiceRemoteProxy : NSObject <GEOAnalyticsDataServiceProxy>

- (int)networkEventFileDescriptorForRepresentativeDate:(id)a0;
- (int)requestResponseMetadataFileDescriptorForBatchID:(unsigned long long)a0;

@end
