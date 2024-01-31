@interface OBDevice : NSObject

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long templateType;
@property (nonatomic) BOOL hasHomeButton;

+ (id)currentDevice;

- (BOOL)isMiniPad;
- (unsigned long long)templateTypeForBoundsWidth:(double)a0;

@end
