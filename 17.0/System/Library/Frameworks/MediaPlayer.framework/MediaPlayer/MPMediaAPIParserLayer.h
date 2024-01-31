@class NSString;

@interface MPMediaAPIParserLayer : NSObject

@property (copy, nonatomic) NSString *key;
@property (nonatomic) unsigned long long type;

+ (id)layerWithFirstObjectOfType:(unsigned long long)a0;
+ (id)layerWithKey:(id)a0 ofType:(unsigned long long)a1;

- (void).cxx_destruct;

@end
