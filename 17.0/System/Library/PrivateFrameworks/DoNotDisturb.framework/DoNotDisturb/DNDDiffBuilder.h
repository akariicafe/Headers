@class NSString, NSArray, NSMutableArray;

@interface DNDDiffBuilder : NSObject {
    NSMutableArray *_children;
}

@property (readonly, nonatomic) id object1;
@property (readonly, nonatomic) id object2;
@property (readonly, copy, nonatomic) NSString *description;
@property (readonly, copy, nonatomic) NSArray *children;
@property (readonly, nonatomic) BOOL hasDifferences;

- (id)init;
- (void)log:(id)a0 withPrefix:(id)a1;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(unsigned long long)a0;
- (void)diffObject:(id)a0 againstObject:(id)a1;
- (void)diffObject:(id)a0 againstObject:(id)a1 withDescription:(id)a2;

@end
