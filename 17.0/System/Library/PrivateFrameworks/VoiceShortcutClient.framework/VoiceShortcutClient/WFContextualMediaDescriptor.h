@class NSData, INPlayMediaIntent, INMediaItem;
@protocol WFPropertyListObject;

@interface WFContextualMediaDescriptor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) INPlayMediaIntent *intent;
@property (readonly, nonatomic) NSData *artwork;
@property (readonly, nonatomic) INMediaItem *mediaItem;
@property (readonly, nonatomic) id<WFPropertyListObject> serializedRepresentation;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMediaItem:(id)a0 serializedRepresentation:(id)a1;
- (id)initWithPlayMediaIntent:(id)a0 artwork:(id)a1;

@end
