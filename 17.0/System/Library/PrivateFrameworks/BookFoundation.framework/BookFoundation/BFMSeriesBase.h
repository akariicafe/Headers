@class _TtC14BookFoundation12MResourceSet, NSArray, NSDictionary, NSString, NSURL, NSNumber, NSError;

@interface BFMSeriesBase : BCMResource <BFMSeries> {
    void /* unknown type, empty encoding */ kind;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ url;
}

@property (class, nonatomic, readonly) long long type;

@property (nonatomic, readonly) BOOL isExplicit;
@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) NSArray *assetsEnrichedWithSeries;
@property (nonatomic, readonly) NSArray *_assets;
@property (nonatomic, readonly) _TtC14BookFoundation12MResourceSet *assetsResourceSet;
@property (nonatomic, readonly) NSDictionary *authorDisplayInfo;
@property (nonatomic, readonly) NSNumber *authorCount;
@property (nonatomic, readonly) NSArray *authorNames;
@property (nonatomic, readonly) NSArray *contentsForArtwork;
@property (nonatomic, readonly) NSArray *genres;
@property (nonatomic, readonly) NSString *currentSort;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ hasUniqueAuthors;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isOrdered;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) BOOL isBookSeries;
@property (nonatomic, readonly) BOOL isAudiobookSeries;

- (void)fetchAllAssetsWithCompletionHandler:(void (^)(NSError *))a0;
- (void)fetchNextAssetsWithCompletionHandler:(void (^)(NSError *))a0;
- (void).cxx_destruct;

@end
