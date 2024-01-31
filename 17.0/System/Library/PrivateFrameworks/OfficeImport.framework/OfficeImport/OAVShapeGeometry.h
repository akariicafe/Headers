@interface OAVShapeGeometry : NSObject

+ (void)readLimoFromManager:(id)a0 toGeometry:(id)a1;
+ (struct OADAdjustCoord { BOOL x0; int x1; })readAdjustCoord:(id)a0;
+ (void)readAdjustValuesFromManager:(id)a0 toGeometry:(id)a1;
+ (id)readFromManager:(id)a0;
+ (void)readTextBodyRectsFromManager:(id)a0 toGeometry:(id)a1;

@end
