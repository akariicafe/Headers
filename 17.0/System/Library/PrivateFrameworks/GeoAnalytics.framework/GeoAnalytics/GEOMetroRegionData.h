@class GEOGloriaDB;

@interface GEOMetroRegionData : NSObject {
    GEOGloriaDB *_db;
}

- (id)init;
- (id)initWithFileURL:(id)a0;
- (void).cxx_destruct;
- (id)metroNameForLocation:(id)a0;

@end
