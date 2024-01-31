@class NSString, GEOOfflineVersionMetadata;

@interface GEOOfflineVersionMetadataFetchReply : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) GEOOfflineVersionMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
