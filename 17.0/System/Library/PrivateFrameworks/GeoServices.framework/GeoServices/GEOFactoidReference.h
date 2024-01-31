@class GEOPDFactoidReference;

@interface GEOFactoidReference : NSObject {
    GEOPDFactoidReference *_factoidReference;
}

@property (readonly, nonatomic) unsigned int indexInFactoidComponent;
@property (readonly, nonatomic) int linkStyle;

- (void).cxx_destruct;
- (id)initWithFactoidReference:(id)a0;

@end
