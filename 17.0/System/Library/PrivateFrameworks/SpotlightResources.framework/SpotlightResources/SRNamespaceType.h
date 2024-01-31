@class NSString, NSMutableSet;

@interface SRNamespaceType : NSObject

@property (copy, nonatomic) NSString *namespaceName;
@property (copy, nonatomic) NSString *namespaceId;
@property (copy, nonatomic) NSMutableSet *parameterNames;

- (id)init;
- (void).cxx_destruct;
- (void)addParameterName:(id)a0;

@end
