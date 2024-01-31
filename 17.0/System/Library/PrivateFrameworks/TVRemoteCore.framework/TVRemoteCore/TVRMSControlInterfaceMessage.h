@interface TVRMSControlInterfaceMessage : PBCodable <NSCopying> {
    struct { unsigned char supportsDirectionalControl : 1; unsigned char supportsSpeakerSelection : 1; unsigned char supportsVolumeControl : 1; } _has;
}

@property (nonatomic) BOOL hasSupportsSpeakerSelection;
@property (nonatomic) BOOL supportsSpeakerSelection;
@property (nonatomic) BOOL hasSupportsVolumeControl;
@property (nonatomic) BOOL supportsVolumeControl;
@property (nonatomic) BOOL hasSupportsDirectionalControl;
@property (nonatomic) BOOL supportsDirectionalControl;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
