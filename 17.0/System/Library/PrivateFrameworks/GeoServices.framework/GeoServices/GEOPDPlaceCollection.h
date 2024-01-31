@class PBDataReader, NSString, GEOPDCaptionedPhoto, GEOPDMapsIdentifier, GEOPDPublisher, NSMutableArray, PBUnknownFields;

@interface GEOPDPlaceCollection : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_authorName;
    GEOPDCaptionedPhoto *_authorPhoto;
    NSMutableArray *_collectionClassDisplayNames;
    NSMutableArray *_collectionClassSpokenNames;
    NSMutableArray *_collectionDescriptionBytes;
    NSMutableArray *_collectionDescriptionHtmls;
    NSMutableArray *_collectionDescriptions;
    GEOPDMapsIdentifier *_collectionId;
    NSMutableArray *_collectionItemDescriptionHtmls;
    NSMutableArray *_collectionItemDescriptions;
    NSMutableArray *_displayTitles;
    NSMutableArray *_itemIds;
    NSMutableArray *_longSpokenTitles;
    NSMutableArray *_longTitles;
    NSMutableArray *_mediaLinks;
    double _modifiedTime;
    NSMutableArray *_photos;
    NSMutableArray *_placeCollectionItems;
    GEOPDMapsIdentifier *_publisherId;
    GEOPDPublisher *_publisher;
    NSMutableArray *_spokenTitles;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _errorState;
    unsigned int _numItems;
    BOOL _enableFallbackImagesForItems;
    struct { unsigned char has_modifiedTime : 1; unsigned char has_errorState : 1; unsigned char has_numItems : 1; unsigned char has_enableFallbackImagesForItems : 1; unsigned char read_unknownFields : 1; unsigned char read_authorName : 1; unsigned char read_authorPhoto : 1; unsigned char read_collectionClassDisplayNames : 1; unsigned char read_collectionClassSpokenNames : 1; unsigned char read_collectionDescriptionBytes : 1; unsigned char read_collectionDescriptionHtmls : 1; unsigned char read_collectionDescriptions : 1; unsigned char read_collectionId : 1; unsigned char read_collectionItemDescriptionHtmls : 1; unsigned char read_collectionItemDescriptions : 1; unsigned char read_displayTitles : 1; unsigned char read_itemIds : 1; unsigned char read_longSpokenTitles : 1; unsigned char read_longTitles : 1; unsigned char read_mediaLinks : 1; unsigned char read_photos : 1; unsigned char read_placeCollectionItems : 1; unsigned char read_publisherId : 1; unsigned char read_publisher : 1; unsigned char read_spokenTitles : 1; unsigned char read_url : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)collectionComponentsForPlaceData:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)collectionHTMLDescription;
- (BOOL)readFrom:(id)a0;
- (id)collectionLongTitle;
- (void)writeTo:(id)a0;
- (id)publisherDescriptionOfCollectionItem;
- (id)initWithData:(id)a0;
- (id)collectionDescription;
- (id)description;
- (id)publisherHTMLDescriptionOfCollectionItem;
- (id)collectionTitle;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
