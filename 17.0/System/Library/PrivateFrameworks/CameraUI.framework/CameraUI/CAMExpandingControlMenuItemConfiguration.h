@interface CAMExpandingControlMenuItemConfiguration : NSObject <NSCopying>

@property (nonatomic) BOOL tintsTitle;
@property (nonatomic) BOOL slashesTitle;
@property (nonatomic) BOOL hidden;

- (BOOL)isEqualToConfiguration:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
