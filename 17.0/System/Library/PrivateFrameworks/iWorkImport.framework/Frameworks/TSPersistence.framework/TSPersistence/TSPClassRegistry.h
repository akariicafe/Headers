@class NSString, NSMutableDictionary;

@interface TSPClassRegistry : NSObject {
    NSString *_name;
    NSMutableDictionary *_registry;
    BOOL _didFinishRegistration;
}

- (id)init;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (Class)classForExtensionNumber:(int)a0;
- (Class)classForMessage:(const struct Message { void /* function */ **x0; struct InternalMetadata { void *x0; } x1; } *)a0;
- (Class)p_classForExtensionNumber:(int)a0;
- (void)registerClass:(Class)a0 forExtensionNumber:(int)a1;

@end
