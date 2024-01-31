@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOSpokenGuidance : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_announcements;
    NSMutableArray *_timeGaps;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _alignment;
    unsigned int _endDesiredTime;
    unsigned int _exclusiveSetIdentifier;
    unsigned int _numChainedVariants;
    unsigned int _priority;
    unsigned int _repetitionInterval;
    unsigned int _startDesiredTime;
    BOOL _tapBeforeAnnouncement;
    struct { unsigned char has_alignment : 1; unsigned char has_endDesiredTime : 1; unsigned char has_exclusiveSetIdentifier : 1; unsigned char has_numChainedVariants : 1; unsigned char has_priority : 1; unsigned char has_repetitionInterval : 1; unsigned char has_startDesiredTime : 1; unsigned char has_tapBeforeAnnouncement : 1; unsigned char read_unknownFields : 1; unsigned char read_announcements : 1; unsigned char read_timeGaps : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *announcements;
@property (nonatomic) BOOL hasStartDesiredTime;
@property (nonatomic) unsigned int startDesiredTime;
@property (nonatomic) BOOL hasEndDesiredTime;
@property (nonatomic) unsigned int endDesiredTime;
@property (nonatomic) BOOL hasAlignment;
@property (nonatomic) int alignment;
@property (nonatomic) BOOL hasRepetitionInterval;
@property (nonatomic) unsigned int repetitionInterval;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) unsigned int priority;
@property (nonatomic) BOOL hasNumChainedVariants;
@property (nonatomic) unsigned int numChainedVariants;
@property (nonatomic) BOOL hasTapBeforeAnnouncement;
@property (nonatomic) BOOL tapBeforeAnnouncement;
@property (retain, nonatomic) NSMutableArray *timeGaps;
@property (nonatomic) BOOL hasExclusiveSetIdentifier;
@property (nonatomic) unsigned int exclusiveSetIdentifier;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)announcementType;
+ (Class)timeGapType;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsAlignment:(id)a0;
- (id)timeGapAtIndex:(unsigned long long)a0;
- (void)addAnnouncement:(id)a0;
- (void)addTimeGap:(id)a0;
- (id)alignmentAsString:(int)a0;
- (id)announcementAtIndex:(unsigned long long)a0;
- (unsigned long long)announcementsCount;
- (void)clearAnnouncements;
- (void)clearTimeGaps;
- (unsigned long long)timeGapsCount;

@end
