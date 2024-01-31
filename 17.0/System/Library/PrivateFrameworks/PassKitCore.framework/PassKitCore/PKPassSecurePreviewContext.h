@class NSString;

@interface PKPassSecurePreviewContext : NSObject

@property (copy, nonatomic) NSString *backgroundColor;
@property (copy, nonatomic) NSString *primaryText;
@property (copy, nonatomic) NSString *primaryColor;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) NSString *secondaryColor;
@property (copy, nonatomic) NSString *tertiaryText;
@property (copy, nonatomic) NSString *tertiaryColor;
@property (readonly, nonatomic) struct CGImage { } *icon;
@property (readonly, nonatomic) struct CGImage { } *image;
@property (readonly, nonatomic) struct CGImage { } *backgroundImage;

+ (id)createMessagesPreviewForPassFileURL:(id)a0 withOutputDirectory:(id)a1;
+ (id)createMessagesPreviewForPassesFileURL:(id)a0 withOutputDirectory:(id)a1;

- (id)init;
- (void)dealloc;
- (void)setIcon:(struct CGImage { } *)a0;
- (void).cxx_destruct;
- (void)setImage:(struct CGImage { } *)a0;
- (void)setBackgroundImage:(struct CGImage { } *)a0;
- (id)_initWithBackgroundColor:(id)a0 primaryColor:(id)a1 secondaryColor:(id)a2 tertiaryColor:(id)a3;

@end
