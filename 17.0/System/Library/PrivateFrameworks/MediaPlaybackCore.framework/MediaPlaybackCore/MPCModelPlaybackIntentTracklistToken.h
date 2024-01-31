@class MPPropertySet, MPModelRequest, MPIdentifierSet;

@interface MPCModelPlaybackIntentTracklistToken : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) MPPropertySet *requiredPropertiesForStaticMediaClips;
@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) MPModelRequest *request;
@property (copy, nonatomic) MPIdentifierSet *startItemIdentifiers;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
