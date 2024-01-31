@class NSDictionary;

@interface TMLJSONSchema : NSObject {
    NSDictionary *_schema;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)propertyForKeyPath:(id)a0;

@end
