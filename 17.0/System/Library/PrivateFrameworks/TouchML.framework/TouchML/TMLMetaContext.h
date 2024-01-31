@class TMLMetaObject, NSMutableDictionary, NSMutableSet, NSString, NSMutableArray;

@interface TMLMetaContext : NSObject <TMLModelSerialize> {
    NSString *_rootObjectIdentifier;
}

@property (readonly, nonatomic) NSMutableDictionary *classes;
@property (readonly, nonatomic) NSMutableDictionary *protocols;
@property (readonly, nonatomic) NSMutableDictionary *objects;
@property (readonly, nonatomic) NSMutableDictionary *functions;
@property (readonly, nonatomic) TMLMetaObject *rootObject;
@property (readonly, nonatomic) NSMutableArray *exports;
@property (readonly, nonatomic) NSMutableSet *requires;
@property (readonly, nonatomic) NSMutableArray *categories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deserializeFromData:(id)a0;
+ (id)decode:(const struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } *)a0;
+ (id)convertObject:(id)a0 toClass:(id)a1;
+ (id)convertObject:(id)a0 toProtocol:(id)a1;

- (id)init;
- (void)commit;
- (id)serializedData;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (void)addClass:(id)a0;
- (void)encode:(struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } *)a0;
- (void)removeFunctions;
- (void)addExports:(id)a0;
- (void)addFunction:(id)a0;
- (void)addObjectAsClass:(id)a0;
- (void)addObjectAsProtocol:(id)a0;
- (void)addProtocol:(id)a0;
- (void)addRequire:(id)a0;
- (id)findParentForObjectWithIdentifier:(id)a0;
- (void)removeCategories;
- (void)removeClasses;

@end
