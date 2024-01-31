@class NSString, NTPBDate;

@interface NTPBReadingHistoryItem : PBCodable <NSCopying> {
    struct { unsigned char listenedCount : 1; unsigned char listeningProgress : 1; unsigned char maxVersionRead : 1; unsigned char maxVersionSeen : 1; unsigned char readCount : 1; unsigned char flags : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (readonly, nonatomic) BOOL hasLastVisitedDate;
@property (retain, nonatomic) NTPBDate *lastVisitedDate;
@property (nonatomic) BOOL hasFlags;
@property (nonatomic) unsigned int flags;
@property (nonatomic) BOOL hasMaxVersionRead;
@property (nonatomic) long long maxVersionRead;
@property (readonly, nonatomic) BOOL hasFirstSeenDate;
@property (retain, nonatomic) NTPBDate *firstSeenDate;
@property (readonly, nonatomic) BOOL hasFirstSeenDateOfMaxVersionSeen;
@property (retain, nonatomic) NTPBDate *firstSeenDateOfMaxVersionSeen;
@property (nonatomic) BOOL hasMaxVersionSeen;
@property (nonatomic) long long maxVersionSeen;
@property (readonly, nonatomic) BOOL hasSourceChannelTagID;
@property (retain, nonatomic) NSString *sourceChannelTagID;
@property (readonly, nonatomic) BOOL hasDeviceID;
@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) BOOL hasListeningProgress;
@property (nonatomic) double listeningProgress;
@property (readonly, nonatomic) BOOL hasLastListened;
@property (retain, nonatomic) NTPBDate *lastListened;
@property (readonly, nonatomic) BOOL hasReadingPosition;
@property (retain, nonatomic) NSString *readingPosition;
@property (nonatomic) BOOL hasReadCount;
@property (nonatomic) long long readCount;
@property (readonly, nonatomic) BOOL hasListeningProgressSavedDate;
@property (retain, nonatomic) NTPBDate *listeningProgressSavedDate;
@property (readonly, nonatomic) BOOL hasReadingPositionSavedDate;
@property (retain, nonatomic) NTPBDate *readingPositionSavedDate;
@property (nonatomic) BOOL hasListenedCount;
@property (nonatomic) long long listenedCount;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
