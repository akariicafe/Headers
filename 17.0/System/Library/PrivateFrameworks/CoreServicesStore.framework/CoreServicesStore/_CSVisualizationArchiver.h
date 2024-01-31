@class NSPredicate, _CSVisualizer;

@interface _CSVisualizationArchiver : NSObject {
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_fileHandle;
    BOOL _closeWhenDone;
    BOOL _outputAsXML;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _hadEPIPE;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dictWriteLock;
    unsigned long long _stats[2];
}

@property (readonly) _CSVisualizer *visualizer;
@property (retain, nonatomic) NSPredicate *unitDescriptionPredicate;

+ (void)beginProvidingVisualizationArchivesWithMachServiceName:(id)a0 queue:(id)a1 creatingVisualizersWithBlock:(id /* block */)a2;
+ (void)processCommandFromConnection:(void *)a0 fileHandle:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a1 providerBlock:(id /* block */)a2;
+ (void)provideVisualizerToConnection:(void *)a0 fileHandle:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a1 providerBlock:(id /* block */)a2;

- (void)dealloc;
- (void)finishWriting;
- (void).cxx_destruct;
- (id)initWithVisualizer:(id)a0 fileHandle:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a1 closeWhenDone:(BOOL)a2 error:(id *)a3;
- (void)writeAllUnitsInTable:(unsigned int)a0 block:(id /* block */)a1;
- (BOOL)fwrite:(const void *)a0 size:(unsigned long long)a1 numberOfItems:(unsigned long long)a2 error:(id *)a3;
- (void)getWriteUnitState:(struct _CSWriteUnitState { id x0; id /* block */ x1; id /* block */ x2; id x3; } *)a0 forTable:(unsigned int)a1;
- (id)initWithVisualizer:(id)a0 fileHandle:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a1 closeWhenDone:(BOOL)a2 allowCompression:(BOOL)a3 error:(id *)a4;
- (void)writeAllUnitsWithBlock:(id /* block */)a0;
- (BOOL)writeDictionary:(id)a0 error:(id *)a1;
- (BOOL)writeMetadata:(id)a0 forStore:(struct __CSStore { } *)a1 error:(id *)a2;
- (void)writeUnit:(unsigned int)a0 inTable:(unsigned int)a1;
- (void)writeUnit:(unsigned int)a0 inTable:(unsigned int)a1 state:(const struct _CSWriteUnitState { id x0; id /* block */ x1; id /* block */ x2; id x3; } *)a2;

@end
