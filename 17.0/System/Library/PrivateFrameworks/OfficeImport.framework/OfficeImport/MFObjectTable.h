@class NSMutableArray;

@interface MFObjectTable : NSObject {
    NSMutableArray *m_objects;
}

@property unsigned int maximumSize;

- (int)deleteObject:(unsigned int)a0;
- (void)clear;
- (id)init;
- (int)size;
- (void).cxx_destruct;
- (id)getObject:(unsigned int)a0;
- (unsigned int)insertPos;
- (int)putObject:(id)a0 in_objectPos:(unsigned int)a1;
- (int)selectInto:(int)a0 io_DC:(id)a1;

@end
