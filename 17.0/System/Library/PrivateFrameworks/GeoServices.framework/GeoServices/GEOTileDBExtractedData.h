@class GEOTileData, NSUUID;

@interface GEOTileDBExtractedData : NSObject

@property (readonly, nonatomic) GEOTileData *data;
@property (readonly, nonatomic) NSUUID *externalResourceUUID;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 externalResourceUUID:(id)a1;

@end
