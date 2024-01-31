@interface TSCH3DLabelBitmapContextInfo : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL isPDF;
@property (readonly, nonatomic) BOOL isPrinting;
@property (readonly, nonatomic) BOOL hasSuppressedBackgrounds;

+ (id)context;
+ (id)contextInfoForScene:(id)a0;
+ (id)contextInfoWithIsPrinting:(BOOL)a0 isPDF:(BOOL)a1 hasSuppressedBackgrounds:(BOOL)a2;
+ (void)setIsPrinting:(BOOL)a0 isPDF:(BOOL)a1 hasSuppressedBackgrounds:(BOOL)a2 forScene:(id)a3;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIsPrinting:(BOOL)a0 isPDF:(BOOL)a1 hasSuppressedBackgrounds:(BOOL)a2;
- (void)setTSDCGContextInfoForCGContext:(struct CGContext { } *)a0;

@end
