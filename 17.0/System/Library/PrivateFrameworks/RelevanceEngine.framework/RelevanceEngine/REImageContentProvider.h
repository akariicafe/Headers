@class REImage;

@interface REImageContentProvider : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REImage *onePieceImage;
@property (readonly, nonatomic) REImage *twoPieceForegroundImage;
@property (readonly, nonatomic) REImage *twoPieceBackgroundImage;

+ (id)imageContentProviderFromClockKitImageProvider:(id)a0;
+ (id)imageContentProviderWithOnePieceImage:(id)a0;
+ (id)imageContentProviderWithOnePieceImage:(id)a0 twoPieceForegroundImage:(id)a1 twoPieceBackgroundImage:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)clockKitImageProviderRepresentation;
- (id)initWithImage:(id)a0 foregroundImage:(id)a1 backgroundImage:(id)a2;

@end
