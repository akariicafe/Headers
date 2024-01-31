@interface CPLRUDictionaryNode : NSObject {
    CPLRUDictionaryNode *next;
    CPLRUDictionaryNode *prev;
}

@property (readonly, nonatomic) id key;
@property (retain, nonatomic) id object;

- (void)dealloc;
- (id)initWithKey:(id)a0 object:(id)a1;

@end
