@interface _UIKeyboardInputModeIconConfiguration : NSObject

@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) long long weight;
@property (nonatomic) BOOL background;
@property (nonatomic) double scaleFactor;

+ (id)defaultConfiguration;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
