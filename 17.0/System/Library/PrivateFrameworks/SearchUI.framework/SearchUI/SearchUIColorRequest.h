@class SFColor, TLKAppearance;

@interface SearchUIColorRequest : NSObject

@property (retain, nonatomic) SFColor *sfColor;
@property (retain, nonatomic) TLKAppearance *appearance;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToColorRequest:(id)a0;

@end
