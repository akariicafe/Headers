@class GEOPBOfflineTileMetadata, NSString;

@interface GEOOfflineTileConfigurationFetchReply : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) GEOPBOfflineTileMetadata *configuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
