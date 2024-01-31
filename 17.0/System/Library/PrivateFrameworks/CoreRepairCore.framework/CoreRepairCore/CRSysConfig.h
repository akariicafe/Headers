@interface CRSysConfig : NSObject

@property (nonatomic) unsigned int syscfgAccess;
@property (nonatomic) BOOL isADDASysCfgAccessType;

+ (id)sharedAccess;

- (id)init;
- (BOOL)syscfgUpdate:(char *)a0 key:(unsigned int)a1 buffer:(const char *)a2 length:(unsigned int)a3;
- (id)createStringForKey:(unsigned int)a0;
- (BOOL)dataIsValid:(struct _syscfgEntry { unsigned int x0; union { unsigned char x0[16]; struct _syscfgJumboData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; } x1; } *)a0 length:(unsigned int)a1;
- (struct _syscfgEntry { unsigned int x0; union { unsigned char x0[16]; struct _syscfgJumboData { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; } x1; } *)findEntry:(char *)a0 key:(unsigned int)a1;
- (BOOL)findSyscfgAccess;
- (id)readSystemConfigAll;
- (id)readSystemConfigArea;
- (BOOL)writeSystemConfig:(unsigned int)a0 inBuffer:(id)a1;

@end
