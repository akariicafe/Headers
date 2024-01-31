@class NSString, GEOLocation, NSArray, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface GEOGeographicMetadataTileFetcher : NSObject <GEOGeographicMetadataFetcher> {
    NSObject<OS_dispatch_queue> *_workQueue;
    int _tileStyle;
    unsigned short _mcc;
    unsigned short _mnc;
    GEOLocation *_location;
    unsigned long long _options;
    NSArray *_tileDatas;
    NSMapTable *_resultItems;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchMetadataWithResponseQueue:(id)a0 block:(id /* block */)a1;
- (void).cxx_destruct;
- (void)reportCorrupt:(id)a0;
- (id)initForTileStyle:(int)a0 location:(id)a1 options:(unsigned long long)a2;
- (id)initForTileStyle:(int)a0 mcc:(unsigned short)a1 mnc:(unsigned short)a2 location:(id)a3 options:(unsigned long long)a4;

@end
