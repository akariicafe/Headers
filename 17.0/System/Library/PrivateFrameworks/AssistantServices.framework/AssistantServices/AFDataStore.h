@class NSMutableDictionary;

@interface AFDataStore : NSObject {
    NSMutableDictionary *_entries;
}

- (id)initWithPropertyListRepresentation:(id)a0;
- (id)init;
- (id)propertyListRepresentation;
- (void).cxx_destruct;
- (id)initWithEntries:(id)a0;
- (id)imageDataForKey:(id)a0;
- (void)setImageData:(id)a0 forKey:(id)a1;

@end
