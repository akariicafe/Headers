@interface LPLinkRendererSizeClassParameters : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL alignButtonWithCaptionTextLeadingEdge;
@property (nonatomic) BOOL preserveIconAspectRatioAndAlignmentWhenScaling;
@property (nonatomic) BOOL onlyShowIcon;
@property (nonatomic) BOOL neverShowIcon;
@property (nonatomic) BOOL disableTextWrapping;

- (id)_cacheKey;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
