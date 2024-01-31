@class NSURL, LPLinkMetadata;

@interface LPLinkMetadataSharedWithYouTransformer : NSObject

@property (readonly, copy, nonatomic) LPLinkMetadata *metadata;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) BOOL shouldDonateToSharedWithYou;

- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0 URL:(id)a1;

@end
