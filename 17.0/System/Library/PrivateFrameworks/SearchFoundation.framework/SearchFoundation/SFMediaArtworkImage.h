@class NSString, NSDictionary, NSData, SFImage;

@interface SFMediaArtworkImage : SFImage <SFMediaArtworkImage, NSSecureCoding, NSCopying> {
    struct { unsigned char mediaEntityType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *persistentID;
@property (copy, nonatomic) NSString *spotlightIdentifier;
@property (nonatomic) int mediaEntityType;
@property (copy, nonatomic) NSString *universalLibraryID;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy) NSData *imageData;
@property (nonatomic) BOOL isTemplate;
@property (nonatomic) BOOL shouldCropToCircle;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *keyColor;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int source;
@property (nonatomic) int cornerRoundingStyle;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (retain, nonatomic) SFImage *badgingImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasMediaEntityType;

@end
