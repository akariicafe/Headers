@interface PXGDecorationViewPayload : PXGViewPayload

@property (readonly, nonatomic) long long decorationOptions;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDecorationOptions:(unsigned long long)a0 viewClass:(Class)a1 userData:(id)a2;

@end
