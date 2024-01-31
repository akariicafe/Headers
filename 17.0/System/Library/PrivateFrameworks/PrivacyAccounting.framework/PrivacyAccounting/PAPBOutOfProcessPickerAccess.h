@class PAPBAccess;

@interface PAPBOutOfProcessPickerAccess : PBCodable <NSCopying> {
    struct { unsigned char pickerType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAccess;
@property (retain, nonatomic) PAPBAccess *access;
@property (nonatomic) BOOL hasPickerType;
@property (nonatomic) int pickerType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
