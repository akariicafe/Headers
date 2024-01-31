@class NSString, CSSearchableItemAttributeSet;

@interface SSArchiveViewCardSection : SFArchiveViewCardSection <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CSSearchableItemAttributeSet *attributeSet;
@property (nonatomic) BOOL isTopHit;
@property (copy, nonatomic) NSString *searchString;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
