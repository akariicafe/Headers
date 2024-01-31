@class NSMutableDictionary, NSObject;

@interface LADecriptionBuilder : NSObject {
    NSObject *_object;
    NSMutableDictionary *_components;
}

- (id)initWithObject:(id)a0;
- (id)build;
- (void)appendObject:(id)a0 withName:(id)a1;
- (void).cxx_destruct;
- (void)appendBool:(BOOL)a0 withName:(id)a1;
- (void)appendInteger:(long long)a0 withName:(id)a1;
- (void)appendString:(id)a0 withName:(id)a1;

@end
