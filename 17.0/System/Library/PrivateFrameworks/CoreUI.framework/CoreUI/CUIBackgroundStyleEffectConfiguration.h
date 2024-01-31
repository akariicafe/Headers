@class NSString;

@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration {
    int _shouldRespectOutputBlending;
}

@property (copy, nonatomic) NSString *backgroundType;
@property (nonatomic) BOOL effectShowsValue;

- (id)init;
- (void)dealloc;
- (BOOL)shouldRespectOutputBlending;
- (id)description;
- (BOOL)shouldIgnoreForegroundColor;
- (void)setShouldRespectOutputBlending:(BOOL)a0;
- (void)setSelectionType:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
