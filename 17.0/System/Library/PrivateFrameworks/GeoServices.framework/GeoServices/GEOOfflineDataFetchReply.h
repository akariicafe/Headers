@class GEOTileData, NSString;

@interface GEOOfflineDataFetchReply : GEOXPCReply <GEOXPCReply>

@property (retain, nonatomic) GEOTileData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
