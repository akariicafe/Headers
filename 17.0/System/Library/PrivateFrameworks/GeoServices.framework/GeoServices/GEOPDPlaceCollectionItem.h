@class PBDataReader, GEOPDQuickLinkItem, GEOPDMapsIdentifier, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDPlaceCollectionItem : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDQuickLinkItem *_appClip;
    NSMutableArray *_itemDescriptionBytes;
    NSMutableArray *_itemDescriptionHtmls;
    NSMutableArray *_itemDescriptions;
    GEOPDMapsIdentifier *_itemId;
    NSMutableArray *_photos;
    NSMutableArray *_punchOutTexts;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _disableAppClipFallback;
    BOOL _enableImageFallback;
    struct { unsigned char has_disableAppClipFallback : 1; unsigned char has_enableImageFallback : 1; unsigned char read_unknownFields : 1; unsigned char read_appClip : 1; unsigned char read_itemDescriptionBytes : 1; unsigned char read_itemDescriptionHtmls : 1; unsigned char read_itemDescriptions : 1; unsigned char read_itemId : 1; unsigned char read_photos : 1; unsigned char read_punchOutTexts : 1; unsigned char read_url : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (id)itemDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)itemHTMLDescription;
- (id)punchOutText;

@end
