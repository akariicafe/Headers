@class SFCard;

@interface SearchUICardViewStateRestorationContext : SearchUICollectionViewRestorationContext <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long level;
@property (retain) SFCard *card;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
