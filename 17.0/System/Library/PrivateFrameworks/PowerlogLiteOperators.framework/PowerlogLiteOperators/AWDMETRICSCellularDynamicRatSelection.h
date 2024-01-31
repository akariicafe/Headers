@interface AWDMETRICSCellularDynamicRatSelection : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char bwObservedAfterSwitch : 1; unsigned char bwObservedBeforeSwitch : 1; unsigned char destRat : 1; unsigned char dlTputObservedAfterSwitch : 1; unsigned char dlTputObservedBeforeSwitch : 1; unsigned char sourceRat : 1; unsigned char subsId : 1; unsigned char ulTputObservedAfterSwitch : 1; unsigned char ulTputObservedBeforeSwitch : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSourceRat;
@property (nonatomic) int sourceRat;
@property (nonatomic) BOOL hasDestRat;
@property (nonatomic) int destRat;
@property (nonatomic) BOOL hasDlTputObservedBeforeSwitch;
@property (nonatomic) unsigned int dlTputObservedBeforeSwitch;
@property (nonatomic) BOOL hasDlTputObservedAfterSwitch;
@property (nonatomic) unsigned int dlTputObservedAfterSwitch;
@property (nonatomic) BOOL hasBwObservedBeforeSwitch;
@property (nonatomic) unsigned int bwObservedBeforeSwitch;
@property (nonatomic) BOOL hasBwObservedAfterSwitch;
@property (nonatomic) unsigned int bwObservedAfterSwitch;
@property (nonatomic) BOOL hasUlTputObservedBeforeSwitch;
@property (nonatomic) unsigned int ulTputObservedBeforeSwitch;
@property (nonatomic) BOOL hasUlTputObservedAfterSwitch;
@property (nonatomic) unsigned int ulTputObservedAfterSwitch;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) unsigned int subsId;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsSourceRat:(id)a0;
- (int)StringAsDestRat:(id)a0;
- (id)destRatAsString:(int)a0;
- (id)sourceRatAsString:(int)a0;

@end
