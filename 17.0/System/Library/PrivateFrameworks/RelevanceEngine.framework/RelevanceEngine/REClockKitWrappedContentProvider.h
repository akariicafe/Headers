@class CLKTextProvider;

@interface REClockKitWrappedContentProvider : RETextContentProvider

@property (readonly, nonatomic) CLKTextProvider *clockKitTextProvider;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;
- (id)initWithClockKitTextProvider:(id)a0;

@end
