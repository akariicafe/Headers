@class NSArray;
@protocol NSObject, NSCopying;

@interface PKApplicationMessageNode : NSObject {
    BOOL _visited;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) id<NSObject, NSCopying> key;
@property (readonly, weak, nonatomic) PKApplicationMessageNode *parent;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) unsigned long long numberOfChildren;
@property (readonly, nonatomic) PKApplicationMessageNode *root;
@property (retain, nonatomic) id context;

+ (id)createForMessages:(id)a0;
+ (id)messageKeysForNode:(id)a0 localKeys:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (void)visitPostOrder:(id /* block */)a0;
- (id)ancestorPassingTest:(id /* block */)a0;
- (void)visitPreOrder:(id /* block */)a0;

@end
