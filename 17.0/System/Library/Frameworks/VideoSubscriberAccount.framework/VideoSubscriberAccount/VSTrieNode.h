@class NSMutableArray, NSMutableDictionary;

@interface VSTrieNode : NSObject

@property (retain, nonatomic) NSMutableArray *objects;
@property (retain, nonatomic) NSMutableDictionary *next;

- (id)init;
- (void).cxx_destruct;

@end
