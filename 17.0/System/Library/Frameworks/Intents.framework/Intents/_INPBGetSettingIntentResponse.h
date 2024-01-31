@class NSString, NSArray;

@interface _INPBGetSettingIntentResponse : PBCodable <_INPBGetSettingIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *errorDetail;
@property (readonly, nonatomic) BOOL hasErrorDetail;
@property (copy, nonatomic) NSArray *settingResponseDatas;
@property (readonly, nonatomic) unsigned long long settingResponseDatasCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)settingResponseDataType;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addSettingResponseData:(id)a0;
- (void)clearSettingResponseDatas;
- (id)settingResponseDataAtIndex:(unsigned long long)a0;

@end
