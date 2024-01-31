@class NSArray, NSString;

@interface SAKnowledgeGetValuesForKeys : SABaseClientBoundCommand <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *keys;
@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSString *storeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getValuesForKeys;
+ (id)getValuesForKeysWithDictionary:(id)a0 context:(id)a1;

@end
