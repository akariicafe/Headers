@interface BRCLRUDictionaryNode : NSObject <NSCopying>

@property (readonly, nonatomic) id key;
@property (retain, nonatomic) id object;
@property (weak, nonatomic) BRCLRUDictionaryNode *next;
@property (weak, nonatomic) BRCLRUDictionaryNode *prev;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 object:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
