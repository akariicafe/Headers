@class NSString, NSMutableArray;

@interface TRIFactor : TRIPBMessage

@property (copy, nonatomic) NSString *id_p;
@property (nonatomic) BOOL hasId_p;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int namespaceId;
@property (nonatomic) BOOL hasNamespaceId;
@property (copy, nonatomic) NSString *namespaceName;
@property (nonatomic) BOOL hasNamespaceName;
@property (retain, nonatomic) NSMutableArray *metadataKeysArray;
@property (readonly, nonatomic) unsigned long long metadataKeysArray_Count;
@property (copy, nonatomic) NSString *alias;
@property (nonatomic) BOOL hasAlias;

+ (id)descriptor;

- (id)typeString;
- (id)namespaceString;
- (BOOL)hasNamespace;
- (BOOL)isInNamespaceName:(id)a0;

@end
