@class NSSet, NSDictionary, NSString;

@interface KGMemoryNode : NSObject <KGNode>

@property (readonly, nonatomic) unsigned long long identifier;
@property (readonly, copy, nonatomic) NSSet *labels;
@property (copy, nonatomic) NSDictionary *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resolveIdentifier:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(unsigned long long)a0 labels:(id)a1 properties:(id)a2;

@end
