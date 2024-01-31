@class UIKBRenderConfig;

@interface UIKBRenderingContext : NSObject <NSCopying>

@property (nonatomic) unsigned long long shiftState;
@property (nonatomic) long long keyboardType;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (nonatomic) long long handBias;
@property (nonatomic) BOOL isFloating;

+ (id)renderingContextForRenderConfig:(id)a0;

- (void).cxx_destruct;
- (id)initWithRenderConfig:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
