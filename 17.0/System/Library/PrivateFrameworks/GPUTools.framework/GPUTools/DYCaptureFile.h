@class NSString, DYCaptureArchive;

@interface DYCaptureFile : NSObject <DYCaptureVisiting> {
    unsigned int _file_pos;
    int _kind_cache;
}

@property (readonly, retain, nonatomic) NSString *name;
@property (readonly, nonatomic) DYCaptureArchive *archive;
@property (readonly, nonatomic) BOOL alias;
@property (readonly, nonatomic) int kind;

- (BOOL)executable;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyData:(id *)a0;
- (id)decodeArchivedObject;
- (id)decodeSerializedPropertyListWithOptions:(unsigned long long)a0 error:(id *)a1;
- (void)_determineKind;
- (id)_initWithArchive:(id)a0 hashPosition:(unsigned int)a1 name:(id)a2;
- (BOOL)acceptCaptureVisitor:(id)a0;
- (id)copyMutableData:(id *)a0;
- (long long)dy_numericCompare:(id)a0;
- (BOOL)getInfo:(struct { unsigned long long x0; unsigned long long x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)a0 error:(id *)a1;
- (id)openFunctionStream:(id *)a0;
- (void)updateName:(id)a0;

@end
