@class NSString;

@interface HDRapportRequestIdentifier : NSObject

@property (readonly, nonatomic) long long schemaIdentifier;
@property (readonly, copy, nonatomic) NSString *name;

- (id)description;
- (void).cxx_destruct;
- (id)initWithSchemaIdentifier:(long long)a0 name:(id)a1;

@end
