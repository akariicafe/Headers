@class NSString;

@interface MPNowPlayingContentItemArtworkToken : NSObject <MPArtworkDataSourceVisualIdenticality>

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *artworkIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stringRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 artworkIdentifier:(id)a1;

@end
