@class NSMutableArray;

@interface CBORArray : CBORValue {
    NSMutableArray *m_data;
}

- (void)write:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (int)fieldType;
- (id)initWith:(id)a0;

@end
