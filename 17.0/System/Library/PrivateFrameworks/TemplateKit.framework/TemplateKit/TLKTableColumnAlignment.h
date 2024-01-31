@interface TLKTableColumnAlignment : TLKObject

@property (nonatomic) unsigned long long columnAlignment;
@property (nonatomic) long long dataAlignment;
@property (nonatomic) BOOL isEqualWidth;

- (long long)textAlignment;
- (id)description;

@end
