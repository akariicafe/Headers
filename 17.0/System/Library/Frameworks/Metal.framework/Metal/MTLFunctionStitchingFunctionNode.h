@class NSString, NSArray;

@interface MTLFunctionStitchingFunctionNode : NSObject <MTLFunctionStitchingNode>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *arguments;
@property (copy, nonatomic) NSArray *controlDependencies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)formattedDescription:(unsigned long long)a0;
- (id)init;
- (void)dealloc;
- (id)initWithName:(id)a0 arguments:(id)a1 controlDependencies:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
