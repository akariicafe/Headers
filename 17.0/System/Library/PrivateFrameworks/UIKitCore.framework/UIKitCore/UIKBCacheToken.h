@class NSString, NSSet, NSMutableArray;

@interface UIKBCacheToken : NSObject <NSCopying> {
    NSMutableArray *_components;
}

@property (readonly, nonatomic) NSString *string;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) double scale;
@property (nonatomic) int rowHint;
@property (nonatomic) int displayHint;
@property (nonatomic) long long renderFlags;
@property (nonatomic) struct { unsigned char x0 : 6; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; } styling;
@property (nonatomic) int emptyFields;
@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSSet *transformationIdentifiers;

+ (id)tokenForKeyplane:(id)a0;
+ (id)tokenTemplateForKey:(id)a0 style:(int)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (id)tokenForKey:(id)a0 style:(struct { unsigned char x0 : 6; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; })a1;
+ (id)tokenForKey:(id)a0 style:(struct { unsigned char x0 : 6; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; })a1 displayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
+ (id)tokenForKeyMask:(id)a0 style:(struct { unsigned char x0 : 6; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 8; })a1 displayInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
+ (id)tokenTemplateFilledForKey:(id)a0 style:(int)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (id)tokenTemplateForKey:(id)a0 name:(id)a1 style:(int)a2 size:(struct CGSize { double x0; double x1; })a3;

- (int)_writeEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 toStr:(char *)a1 maxLen:(int)a2;
- (id)initWithName:(id)a0;
- (id)stringForSplitState:(BOOL)a0 handBias:(long long)a1;
- (id)stringForRenderFlags:(long long)a0 lightKeyboard:(BOOL)a1;
- (id)description;
- (void)annotateWithBool:(BOOL)a0;
- (int)_writeNumber:(float)a0 toStr:(char *)a1;
- (void)annotateWithInt:(int)a0;
- (id)stringForKey:(id)a0 state:(int)a1;
- (void).cxx_destruct;
- (id)stringForComponentArray:(id)a0 additionalValues:(id /* block */)a1;
- (BOOL)isUsableForCacheToken:(id)a0 withRenderFlags:(long long)a1;
- (id)stringForConstruction:(id /* block */)a0;
- (int)_writeArray:(id)a0 toStr:(char *)a1 maxLen:(int)a2;
- (id)stringForState:(int)a0;
- (id)initWithComponents:(id)a0 name:(id)a1;
- (void)resetAnnotations;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)_writeString:(id)a0 toStr:(char *)a1 maxLen:(int)a2;

@end
