@class NSString;

@interface _INPBLocalDate : PBCodable <_INPBLocalDate, NSSecureCoding, NSCopying> {
    struct { unsigned char dayOfMonth : 1; unsigned char dayOfWeek : 1; unsigned char month : 1; unsigned char year : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long dayOfMonth;
@property (nonatomic) BOOL hasDayOfMonth;
@property (nonatomic) int dayOfWeek;
@property (nonatomic) BOOL hasDayOfWeek;
@property (nonatomic) long long month;
@property (nonatomic) BOOL hasMonth;
@property (nonatomic) long long year;
@property (nonatomic) BOOL hasYear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsDayOfWeek:(id)a0;
- (id)dayOfWeekAsString:(int)a0;

@end
