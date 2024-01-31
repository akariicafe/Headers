@class PBDataReader, NSString, GEOPDResultRefinementMetadata, PBUnknownFields;

@interface GEOPDResultRefinementToggle : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_displayName;
    GEOPDResultRefinementMetadata *_metadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _evChargingConnectorType;
    unsigned int _selectionSequenceNumber;
    int _toggleType;
    BOOL _isSelected;
    BOOL _selectionFromView;
    BOOL _showAsSelected;
    struct { unsigned char has_evChargingConnectorType : 1; unsigned char has_selectionSequenceNumber : 1; unsigned char has_toggleType : 1; unsigned char has_isSelected : 1; unsigned char has_selectionFromView : 1; unsigned char has_showAsSelected : 1; unsigned char read_unknownFields : 1; unsigned char read_displayName : 1; unsigned char read_metadata : 1; unsigned char wrote_anyField : 1; } _flags;
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
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
