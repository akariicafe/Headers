@class NSMutableSet;

@interface CoreDAVExpandPropertiesTask : CoreDAVPropertyFindBaseTask

@property (retain, nonatomic) NSMutableSet *propertiesToExpand;

- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)parseHints;
- (id)requestBody;
- (id)description;
- (void)addPropertyToExpandWithPropertiesToFind:(id)a0 expandedName:(id)a1 expandedNameSpace:(id)a2;
- (void).cxx_destruct;
- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1 expandedName:(id)a2 expandedNameSpace:(id)a3;
- (id)httpMethod;

@end
