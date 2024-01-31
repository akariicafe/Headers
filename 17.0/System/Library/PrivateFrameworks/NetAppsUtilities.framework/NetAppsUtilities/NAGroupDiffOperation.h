@class NSNumber, NSString;
@protocol NADiffableItemGroup;

@interface NAGroupDiffOperation : NSObject <NADiffOperation>

@property (readonly, nonatomic) id<NADiffableItemGroup> group;
@property (readonly, copy, nonatomic) NSNumber *fromIndex;
@property (readonly, copy, nonatomic) NSNumber *toIndex;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *operationDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deleteOperationWithGroup:(id)a0 atIndex:(unsigned long long)a1;
+ (id)insertOperationWithGroup:(id)a0 atIndex:(unsigned long long)a1;
+ (id)moveOperationWithGroup:(id)a0 fromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_operationDescriptionWithVerboseType:(BOOL)a0;
- (id)initWithOperationType:(unsigned long long)a0 group:(id)a1 fromIndex:(id)a2 toIndex:(id)a3;

@end
