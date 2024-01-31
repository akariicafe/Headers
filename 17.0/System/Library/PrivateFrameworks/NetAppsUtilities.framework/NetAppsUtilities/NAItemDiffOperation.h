@class NSString, NSIndexPath;

@interface NAItemDiffOperation : NSObject <NADiffOperation>

@property (readonly, nonatomic) id item;
@property (readonly, copy, nonatomic) NSIndexPath *fromIndexPath;
@property (readonly, copy, nonatomic) NSIndexPath *toIndexPath;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *operationDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deleteOperationWithItem:(id)a0 atIndexPath:(id)a1;
+ (id)insertOperationWithItem:(id)a0 atIndexPath:(id)a1;
+ (id)moveOperationWithItem:(id)a0 fromIndexPath:(id)a1 toIndexPath:(id)a2;
+ (id)reloadOperationWithItem:(id)a0 atIndexPath:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_operationDescriptionWithVerboseType:(BOOL)a0;
- (id)initWithOperationType:(unsigned long long)a0 item:(id)a1 fromIndexPath:(id)a2 toIndexPath:(id)a3;

@end
