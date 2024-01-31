@class NSMutableArray, PBDataReader;

@interface GEOPDFlyover : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct GEOPDCameraPathFrame { float x0; float x1; float x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; } x11; } *_cameraPaths;
    unsigned long long _cameraPathsCount;
    unsigned long long _cameraPathsSpace;
    struct GEOPDLabelFrame { float x0; unsigned int x1; float x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *_labelFrames;
    unsigned long long _labelFramesCount;
    unsigned long long _labelFramesSpace;
    NSMutableArray *_labels;
    NSMutableArray *_notificationMessages;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _useSplines;
    struct { unsigned char has_useSplines : 1; unsigned char read_cameraPaths : 1; unsigned char read_labelFrames : 1; unsigned char read_labels : 1; unsigned char read_notificationMessages : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long cameraPathsCount;
@property (readonly, nonatomic) struct GEOPDCameraPathFrame { float x0; float x1; float x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; } x11; } *cameraPaths;
@property (nonatomic) BOOL hasUseSplines;
@property (nonatomic) BOOL useSplines;
@property (readonly, nonatomic) unsigned long long labelFramesCount;
@property (readonly, nonatomic) struct GEOPDLabelFrame { float x0; unsigned int x1; float x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *labelFrames;
@property (retain, nonatomic) NSMutableArray *labels;
@property (retain, nonatomic) NSMutableArray *notificationMessages;

+ (BOOL)isValid:(id)a0;
+ (Class)labelType;
+ (id)flyoverForPlaceData:(id)a0;
+ (Class)notificationMessageType;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (void)addCameraPath:(struct GEOPDCameraPathFrame { float x0; float x1; float x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; } x11; })a0;
- (void)addLabel:(id)a0;
- (void)addLabelFrame:(struct GEOPDLabelFrame { float x0; unsigned int x1; float x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; })a0;
- (void)addNotificationMessage:(id)a0;
- (id)bestLocalizedAnnouncementMessage;
- (id)bestLocalizedLabelAtIndex:(unsigned long long)a0;
- (struct GEOPDCameraPathFrame { float x0; float x1; float x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; } x11; })cameraPathAtIndex:(unsigned long long)a0;
- (void)clearCameraPaths;
- (void)clearLabelFrames;
- (void)clearLabels;
- (void)clearNotificationMessages;
- (id)labelAtIndex:(unsigned long long)a0;
- (struct GEOPDLabelFrame { float x0; unsigned int x1; float x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; })labelFrameAtIndex:(unsigned long long)a0;
- (unsigned long long)labelsCount;
- (id)notificationMessageAtIndex:(unsigned long long)a0;
- (unsigned long long)notificationMessagesCount;
- (void)setCameraPaths:(struct GEOPDCameraPathFrame { float x0; float x1; float x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; } x11; } *)a0 count:(unsigned long long)a1;
- (void)setLabelFrames:(struct GEOPDLabelFrame { float x0; unsigned int x1; float x2; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x3; } *)a0 count:(unsigned long long)a1;

@end
