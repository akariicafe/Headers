@class NSString, NSDictionary;

@interface RUIXMLElement : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ attributtes;
    void /* unknown type, empty encoding */ stringValue;
    void /* unknown type, empty encoding */ children;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) NSDictionary *attributtes;
@property (nonatomic, weak) void /* unknown type, empty encoding */ parent;

- (id)init;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)appendChild:(id)a0;
- (id)initWithName:(id)a0 attributes:(id)a1;
- (void)appendChildren:(id)a0;

@end
