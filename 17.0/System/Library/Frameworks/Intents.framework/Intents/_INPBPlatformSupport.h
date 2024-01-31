@class NSString;

@interface _INPBPlatformSupport : PBCodable <_INPBPlatformSupport, NSSecureCoding, NSCopying> {
    struct { unsigned char supportedPlatform : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *minimumOsVersion;
@property (readonly, nonatomic) BOOL hasMinimumOsVersion;
@property (nonatomic) int supportedPlatform;
@property (nonatomic) BOOL hasSupportedPlatform;
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
- (int)StringAsSupportedPlatform:(id)a0;
- (id)supportedPlatformAsString:(int)a0;

@end
