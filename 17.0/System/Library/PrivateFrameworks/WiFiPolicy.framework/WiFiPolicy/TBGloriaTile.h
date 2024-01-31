@class NSString, NSDate;

@interface TBGloriaTile : NSObject <TBTile>

@property (nonatomic) double lat;
@property (nonatomic) double lng;
@property (nonatomic) unsigned char zoom;
@property (nonatomic) unsigned long long key;
@property (nonatomic) double north;
@property (nonatomic) double south;
@property (nonatomic) double east;
@property (nonatomic) double west;
@property (copy, nonatomic) NSString *WKTString;
@property (nonatomic) double tileSize;
@property (readonly, copy, nonatomic) NSDate *created;
@property (retain, nonatomic) NSString *etag;
@property (readonly, nonatomic) unsigned long long networkCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)gloriaTileWithLat:(double)a0 lng:(double)a1 zoom:(unsigned char)a2;
+ (unsigned char)defaultZoomLevel;

- (id)adjacentTileKeysWithLevel:(unsigned int)a0;
- (id)initWithLat:(double)a0 lng:(double)a1 zoom:(unsigned char)a2;
- (void).cxx_destruct;
- (id)neighborTileKeysWithRadius:(double)a0;
- (id)initWithLat:(double)a0 lng:(double)a1;
- (id)initWithEncodedKey:(unsigned long long)a0 zoom:(unsigned char)a1;

@end
