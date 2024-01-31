@class NSDictionary;

@interface TSPDataAttributesSnapshot : NSObject {
    NSDictionary *_attributesMap;
}

+ (id)newSnapshotForContext:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)attributesForData:(id)a0;
- (id)initWithAttributesMap:(id)a0;

@end
