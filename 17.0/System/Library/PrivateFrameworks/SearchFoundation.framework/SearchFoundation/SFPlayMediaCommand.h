@class NSString, NSDictionary, SFMediaMetadata, NSData, SFTopic;

@interface SFPlayMediaCommand : SFCommand <SFPlayMediaCommand, NSSecureCoding, NSCopying> {
    struct { unsigned char playbackLocation : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFMediaMetadata *mediaMetadata;
@property (nonatomic) int playbackLocation;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *commandDetail;
@property (retain, nonatomic) SFTopic *normalizedTopic;
@property (copy, nonatomic) NSData *backendData;
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
- (BOOL)hasPlaybackLocation;

@end
