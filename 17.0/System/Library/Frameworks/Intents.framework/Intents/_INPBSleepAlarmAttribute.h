@class NSString, _INPBDateTime;

@interface _INPBSleepAlarmAttribute : PBCodable <_INPBSleepAlarmAttribute, NSSecureCoding, NSCopying> {
    struct { unsigned char override : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBDateTime *bedtime;
@property (readonly, nonatomic) BOOL hasBedtime;
@property (nonatomic) BOOL override;
@property (nonatomic) BOOL hasOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
