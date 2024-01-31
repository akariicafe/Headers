@interface STStorage : STSStgObject {
    struct _Storage { } *m_pCStorage;
}

- (void)close;
- (id)init;
- (void)dealloc;
- (void)setClass:(struct { unsigned int x0; unsigned short x1; unsigned short x2; unsigned char x3[8]; })a0;
- (id)getChildrenInfo;
- (id)getInfo;
- (int)getChildType:(id)a0;
- (id)initWithCStorage:(struct _Storage { } *)a0;
- (id)openStorage:(id)a0 withMode:(int)a1;
- (id)openStream:(id)a0 withMode:(int)a1;

@end
