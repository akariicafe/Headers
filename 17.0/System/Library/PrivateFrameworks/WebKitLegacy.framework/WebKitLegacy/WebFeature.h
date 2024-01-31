@class NSString;

@interface WebFeature : NSObject

@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *preferenceKey;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long status;
@property (readonly, nonatomic) unsigned long long category;
@property (readonly, copy, nonatomic) NSString *details;
@property (readonly, nonatomic) BOOL defaultValue;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;

- (void)dealloc;
- (id)description;
- (id)initWithKey:(id)a0 preferenceKey:(id)a1 name:(id)a2 status:(unsigned long long)a3 category:(unsigned long long)a4 details:(id)a5 defaultValue:(BOOL)a6 hidden:(BOOL)a7;

@end
