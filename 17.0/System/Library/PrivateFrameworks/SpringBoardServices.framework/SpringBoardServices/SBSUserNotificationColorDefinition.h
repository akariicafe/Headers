@class BSColor, NSString;

@interface SBSUserNotificationColorDefinition : NSObject <NSCopying>

@property (readonly, copy, nonatomic) BSColor *color;
@property (readonly, copy, nonatomic) NSString *colorName;

+ (id)definitionWithColor:(id)a0;
+ (id)definitionWithColorName:(id)a0;

- (id)build;
- (void).cxx_destruct;
- (id)_initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_stringForColor:(id)a0;
- (id)_colorForString:(id)a0;
- (id)_initWithColorName:(id)a0 color:(id)a1;

@end
