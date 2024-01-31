@interface TILRUDictionaryNode : NSObject {
    TILRUDictionaryNode *next;
    TILRUDictionaryNode *prev;
}

@property (readonly, nonatomic) id key;
@property (retain, nonatomic) id object;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 object:(id)a1;

@end
