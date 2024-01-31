@interface ASCOfferMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) ASCOfferMetadata *emptyMetadata;
@property (class, readonly) ASCOfferMetadata *placeholderMetadata;
@property (class, readonly) ASCOfferMetadata *viewInAppStoreMetadata;
@property (class, readonly) ASCOfferMetadata *redownloadMetadata;
@property (class, readonly) ASCOfferMetadata *indeterminateProgressMetadata;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic, getter=isText) BOOL text;
@property (readonly, nonatomic, getter=isIcon) BOOL icon;
@property (readonly, nonatomic, getter=isProgress) BOOL progress;
@property (readonly, nonatomic, getter=isPlaceholder) BOOL placeholder;
@property (readonly, nonatomic, getter=isViewInAppStore) BOOL viewInAppStore;

+ (id)textMetadataWithTitle:(id)a0 subtitle:(id)a1;
+ (id)iconMetadataWithImageName:(id)a0 animationName:(id)a1;
+ (id)progressMetadataWithValue:(double)a0;

- (id)init;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
