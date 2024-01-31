@interface WBParagraphProperties : NSObject

+ (void *)createTrackedPropertiesIfNeeded:(id)a0;
+ (id)formattingChangeDate:(const struct WrdDateTime { void /* function */ **x0; int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; } *)a0;
+ (void)mapWordProperties:(void *)a0 reader:(id)a1 toProperties:(id)a2;
+ (void)readFrom:(id)a0 wrdProperties:(void *)a1 tracked:(void *)a2 document:(id)a3 properties:(id)a4;

@end
