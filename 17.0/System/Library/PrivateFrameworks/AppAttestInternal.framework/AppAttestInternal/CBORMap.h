@class NSMapTable;

@interface CBORMap : CBORValue {
    NSMapTable *m_data;
}

- (void)write:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (int)fieldType;
- (id)getSortedKeys;
- (void)setKey:(id)a0 value:(id)a1;

@end
