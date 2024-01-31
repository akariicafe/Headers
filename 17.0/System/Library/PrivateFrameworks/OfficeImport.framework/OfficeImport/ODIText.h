@interface ODIText : NSObject

+ (void)addTextFromPoint:(id)a0 level:(unsigned int)a1 includeChildren:(BOOL)a2 toShape:(id)a3 baseListStyle:(id)a4 state:(id)a5;
+ (id)baseListStyleForPoint:(id)a0 shape:(id)a1 isCentered:(BOOL)a2 state:(id)a3;
+ (void)mapTextFromPoint:(id)a0 toShape:(id)a1 isCentered:(BOOL)a2 includeChildren:(BOOL)a3 state:(id)a4;
+ (void)mapTextFromPoint:(id)a0 toShape:(id)a1 isCenteredHorizontally:(BOOL)a2 isCenteredVertically:(BOOL)a3 includeChildren:(BOOL)a4 state:(id)a5;

@end
