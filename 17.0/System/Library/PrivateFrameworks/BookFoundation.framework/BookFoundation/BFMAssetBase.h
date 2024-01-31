@class NSDate, NSString, NSArray, NSURL, BFMSeriesBase, _TtC14BookFoundation12MResourceSet, NSDictionary, NSDecimalNumber, NSNumber;
@protocol BFMSeries;

@interface BFMAssetBase : BCMResource <BFMAsset> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_cache;
    void /* unknown type, empty encoding */ artistName;
    void /* unknown type, empty encoding */ artwork;
    void /* unknown type, empty encoding */ kind;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ url;
}

@property (class, nonatomic, readonly) long long type;

@property (nonatomic, readonly) NSString *seriesName;
@property (nonatomic, readonly) NSDecimalNumber *sequenceNumber;
@property (nonatomic, readonly) NSString *sequenceDisplayLabel;
@property (nonatomic, readonly) NSString *contentRating;
@property (nonatomic, readonly) BOOL isExplicit;
@property (nonatomic, readonly) NSString *genre;
@property (nonatomic, readonly) NSString *buyParams;
@property (nonatomic, readonly) NSDate *releaseDate;
@property (nonatomic, readonly) BOOL hasSupplementalContent;
@property (nonatomic, readonly) BOOL isIBook;
@property (nonatomic, readonly) BOOL isSG;
@property (nonatomic, readonly) NSURL *bookSampleDownloadURL;
@property (nonatomic, readonly) NSString *locale;
@property (nonatomic, readonly) NSString *pageProgressionDirection;
@property (nonatomic, readonly) BOOL pagesAreRTL;
@property (nonatomic, readonly) NSArray *previews;
@property (nonatomic, readonly) NSString *publisher;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) NSArray *versionHistory;
@property (nonatomic, readonly) NSDictionary *seriesInfo;
@property (nonatomic, readonly) NSArray *genreNames;
@property (nonatomic, readonly) NSArray *offers;
@property (nonatomic, readonly) NSDictionary *editorialNotes;
@property (nonatomic, readonly) NSDictionary *descriptionDict;
@property (nonatomic, readonly) NSDictionary *userRating;
@property (nonatomic, readonly) double averageRating;
@property (nonatomic, readonly) unsigned long long ratingCount;
@property (nonatomic, readonly) unsigned long long ratingCountForAnalytics;
@property (nonatomic, readonly) NSString *standardNotes;
@property (nonatomic, readonly) NSString *standardDescription;
@property (nonatomic, readonly) NSString *rawOfferType;
@property (nonatomic, readonly) NSString *priceFormatted;
@property (nonatomic, readonly) NSNumber *price;
@property (nonatomic, readonly) BOOL isPreorder;
@property (nonatomic, readonly) NSDate *expectedReleaseDate;
@property (nonatomic, readonly) long long fileSize;
@property (nonatomic, readonly) NSDictionary *offer;
@property (nonatomic, readonly) NSDictionary *assets;
@property (nonatomic, readonly) NSDictionary *preview;
@property (nonatomic, readonly) NSURL *previewURL;
@property (nonatomic, readonly) NSString *artworkURL;
@property (nonatomic, readonly) NSNumber *width;
@property (nonatomic, readonly) NSNumber *height;
@property (nonatomic, readonly) id<BFMSeries> seriesResource;
@property (nonatomic, retain) BFMSeriesBase *_seriesResource;
@property (nonatomic, retain) _TtC14BookFoundation12MResourceSet *seriesResourceSet;
@property (nonatomic, readonly) NSString *artistName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) BOOL isBook;
@property (nonatomic, readonly) BOOL isAudiobook;

- (void).cxx_destruct;

@end
