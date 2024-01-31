@class NSDictionary, NSString;

@interface PHNetwork : NSObject

@property (retain) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly) NSString *code;

+ (id)networkFromDictionary:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)initWithName:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
