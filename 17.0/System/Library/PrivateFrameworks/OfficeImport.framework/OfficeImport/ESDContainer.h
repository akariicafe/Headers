@class NSMutableArray;

@interface ESDContainer : ESDObject {
    NSMutableArray *mChildren;
}

+ (void)pbReadChildrenOfObject:(struct EshObject { void /* function */ **x0; unsigned short x1; } *)a0 toArray:(id)a1 state:(id)a2;
+ (void)readChildrenOfObject:(struct EshObject { void /* function */ **x0; unsigned short x1; } *)a0 reader:(struct OcReader { } *)a1 toArray:(id)a2;

- (void).cxx_destruct;
- (unsigned long long)childCount;
- (void)addChild:(id)a0;
- (void)removeChild:(id)a0;
- (void)insertChild:(id)a0 at:(unsigned long long)a1;
- (id)addChildOfType:(unsigned short)a0;
- (struct EshObject { void /* function */ **x0; unsigned short x1; } *)addAtomChildOfType:(unsigned short)a0;
- (void)addCStringWithChar2String:(const unsigned short *)a0 instance:(int)a1;
- (void)addCStringWithNSString:(id)a0 instance:(int)a1;
- (id)addContainerChildOfType:(unsigned short)a0;
- (id)addEshChild:(struct EshObject { void /* function */ **x0; unsigned short x1; } *)a0;
- (struct EshObject { void /* function */ **x0; unsigned short x1; } *)addPptAtomChildOfType:(unsigned short)a0;
- (id)addPptContainerChildOfType:(unsigned short)a0;
- (id)addPptEshClientChildOfType:(unsigned short)a0;
- (id)childAt:(unsigned long long)a0;
- (id)childOfType:(unsigned short)a0 instance:(short)a1;
- (id)containerChildAt:(unsigned long long)a0;
- (id)containerChildOfType:(unsigned short)a0 instance:(short)a1 mustExist:(BOOL)a2;
- (id)containerFromObject:(id)a0 mustExist:(BOOL)a1;
- (void *)eshContainer;
- (void *)eshGroup;
- (id)firstChildOfType:(unsigned short)a0;
- (id)firstChildOfType:(unsigned short)a0 afterChild:(id)a1;
- (id)firstChildOfType:(unsigned short)a0 afterIndex:(unsigned long long)a1;
- (id)firstContainerChildOfType:(unsigned short)a0 mustExist:(BOOL)a1;
- (unsigned long long)indexOfFirstChildOfType:(unsigned short)a0 afterIndex:(unsigned long long)a1;
- (id)initForExcelBinaryWithType:(unsigned short)a0 version:(unsigned short)a1 state:(id)a2;
- (id)initFromReader:(struct OcReader { } *)a0 type:(unsigned short)a1 version:(unsigned short)a2;
- (id)initPBWithType:(unsigned short)a0 version:(unsigned short)a1 state:(id)a2;
- (id)initWithEshObject:(struct EshObject { void /* function */ **x0; unsigned short x1; } *)a0;
- (id)insertEshChild:(struct EshObject { void /* function */ **x0; unsigned short x1; } *)a0 at:(unsigned long long)a1;
- (id)shapeContainer;
- (void)writeToWriter:(struct OcWriter { } *)a0;

@end
