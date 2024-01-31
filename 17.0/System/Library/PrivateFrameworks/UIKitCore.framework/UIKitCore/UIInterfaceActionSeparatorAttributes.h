@class NSArray, UIColor;

@interface UIInterfaceActionSeparatorAttributes : NSObject <NSCopying>

@property (retain, nonatomic) NSArray *filters;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) double opacity;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_hasNonClearBackgroundColor;
- (id)newSeparatorView;

@end
