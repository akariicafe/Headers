@class ASCOfferTheme, ASCOfferMetadata;

@interface ASCOfferPresenterViewState : NSObject <NSCopying>

@property (readonly, copy, nonatomic) ASCOfferMetadata *metadata;
@property (readonly, copy, nonatomic) ASCOfferTheme *theme;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMetadata:(id)a0 theme:(id)a1;

@end
