@class NSString;

@interface PLUniformTypeIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned int wellKnownFileType;
@property (readonly, nonatomic) short conformanceHint;
@property (readonly, nonatomic) NSString *compactRepresentation;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (BOOL)isPlayableVideoTypeIdentifierString:(id)a0;
+ (id)quicktimeUniformTypeIdentifier;
+ (id)jpegUniformTypeIdentifier;
+ (id)utiWithIdentifier:(id)a0;
+ (id)plistUniformTypeIdentifier;
+ (id)videoComplementUniformTypeIdentifier;
+ (id)utiWithCompactRepresentation:(id)a0 conformanceHint:(short)a1;

- (BOOL)isDynamic;
- (BOOL)conformsToRawImage;
- (id)preferredExtension;
- (unsigned long long)hash;
- (BOOL)conformsToData;
- (BOOL)isEqualToUniformTypeIdentifier:(id)a0;
- (BOOL)conformsToMovie;
- (BOOL)isPlayableVideo;
- (BOOL)conformsToAudio;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isPrimaryImageFormat;
- (id)initWithIdentifier:(id)a0 compactRepresentation:(id)a1 conformanceHint:(short)a2;
- (BOOL)conformsToJPEG;
- (BOOL)isEqual:(id)a0;
- (BOOL)conformsToImage;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isLosslessEncoding;

@end
