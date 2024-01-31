@interface OAVColor : NSObject

+ (int)readColorAdjustmentType:(id)a0;
+ (id)readColorFromAttribute:(id)a0 alpha:(float)a1 manager:(id)a2;
+ (int)readColorProperty:(id)a0;
+ (id)readColorProperty:(int)a0 manager:(id)a1;
+ (id)readPropertyColorFromAttribute:(id)a0 manager:(id)a1;
+ (id)readRGBColorFromAttribute:(id)a0;

@end
