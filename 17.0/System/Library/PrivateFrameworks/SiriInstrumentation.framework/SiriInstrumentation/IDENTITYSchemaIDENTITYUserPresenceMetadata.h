@class NSString, NSData;

@interface IDENTITYSchemaIDENTITYUserPresenceMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char userLocation : 1; unsigned char userLocationSource : 1; } _has;
}

@property (copy, nonatomic) NSString *loggableMultiUserSharedUserId;
@property (nonatomic) BOOL hasLoggableMultiUserSharedUserId;
@property (nonatomic) int userLocation;
@property (nonatomic) BOOL hasUserLocation;
@property (nonatomic) int userLocationSource;
@property (nonatomic) BOOL hasUserLocationSource;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteLoggableMultiUserSharedUserId;
- (void)deleteUserLocation;
- (void)deleteUserLocationSource;

@end
