@interface OABTextBodyProperties : NSObject

+ (void)setTextFlow:(int)a0 textBodyProperties:(id)a1;
+ (void)readTextBodyProperties:(id)a0 textBox:(const struct EshTextBox { void /* function */ **x0; unsigned short x1; struct EshContentData *x2; } *)a1 useDefaults:(BOOL)a2 state:(id)a3;
+ (void)setAutoFit:(BOOL)a0 textBodyProperties:(id)a1;
+ (void)setIsAnchorCenter:(int)a0 textBodyProperties:(id)a1;
+ (void)setTextAnchor:(int)a0 textBodyProperties:(id)a1;
+ (void)setTextDirection:(int)a0 textBodyProperties:(id)a1;
+ (void)setTextRotation:(int)a0 textBodyProperties:(id)a1;
+ (void)setWrap:(int)a0 textBodyProperties:(id)a1;
+ (void)writeTextBodyProperties:(id)a0 toShapeBase:(void *)a1 state:(id)a2;

@end
