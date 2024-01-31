@class NSString;

@interface VMUMutableFieldInfo : VMUFieldInfo

@property (nonatomic) unsigned int scannableSize;
@property (nonatomic) unsigned int stride;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) NSString *typeName;
@property (nonatomic) BOOL isCapture;
@property (nonatomic) BOOL isByref;
@property (copy, nonatomic) NSString *ivarName;
@property (nonatomic) unsigned int scanType;

- (void)setSize:(unsigned int)a0;
- (void)setOffset:(unsigned int)a0;
- (void)setFlags:(unsigned int)a0;
- (void)setStride:(unsigned int)a0;
- (void)setKind:(unsigned int)a0;
- (void)setScannableSize:(unsigned int)a0;
- (void)setIvarName:(id)a0;
- (void)mutateTypeFieldsRecursivelyWithBlock:(id /* block */)a0 parentOffset:(unsigned int)a1;
- (void)setScanType:(unsigned int)a0;
- (void)addSubField:(id)a0;
- (void)setIsCapture:(BOOL)a0;
- (void)setIsByref:(BOOL)a0;
- (BOOL)replaceFieldRecursively:(id)a0 withField:(id)a1;

@end
