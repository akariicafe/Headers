@interface CKAtomProxy : CKXStructProxyBase <CKXReadStructProxy>

@property (readonly, nonatomic) unsigned long long size;

- (id)location;
- (unsigned long long)version;
- (id)timestamp;
- (id)value;
- (id)references;
- (unsigned long long)valueSize;
- (unsigned long long)atomType;
- (unsigned char)atomBehavior;
- (void)copyValueBytes:(void *)a0 length:(unsigned long long *)a1 isNull:(BOOL *)a2;

@end
