@interface CKApplicationState : NSObject

@property (class, readonly, nonatomic) BOOL isApplicationActive;
@property (class, readonly, nonatomic) BOOL isBackground;
@property (class, readonly, nonatomic) BOOL isResizing;

+ (void)setActive:(BOOL)a0;
+ (BOOL)_isUIExtension;
+ (BOOL)isWindowForegroundActive:(id)a0;

@end
