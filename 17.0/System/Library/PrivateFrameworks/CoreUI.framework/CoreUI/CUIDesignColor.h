@interface CUIDesignColor : NSObject

@property (readonly, nonatomic) struct CGColor { } *cgColor;
@property (readonly, nonatomic) int blendMode;
@property (readonly, nonatomic) long long displayGamut;

- (void)dealloc;
- (id)initWithColor:(struct CGColor { } *)a0 blendMode:(int)a1 displayGamut:(long long)a2;

@end
