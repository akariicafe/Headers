@class NSString, NSBundle, NSDictionary;

@interface DYExtension : NSObject {
    NSDictionary *_dictionary;
}

@property (readonly, retain, nonatomic) NSString *slot;
@property (readonly, retain, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) NSBundle *bundle;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)objectForKey:(id)a0;
- (id)_initWithDictionary:(id)a0 bundle:(id)a1;

@end
