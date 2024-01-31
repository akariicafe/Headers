@class NSString, UIColor;

@interface PSCapacityBarCategory : NSObject <NSCopying>

@property unsigned long long bytes;
@property (retain) NSString *identifier;
@property (retain) NSString *title;
@property (retain) UIColor *color;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 title:(id)a1 color:(id)a2 bytes:(long long)a3;

@end
