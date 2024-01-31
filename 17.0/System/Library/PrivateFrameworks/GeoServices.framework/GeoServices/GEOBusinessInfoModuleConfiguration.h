@class NSArray, GEOPDBusinessInfosModuleConfiguration;

@interface GEOBusinessInfoModuleConfiguration : NSObject {
    GEOPDBusinessInfosModuleConfiguration *_businessInfosModuleConfig;
}

@property (readonly, nonatomic) NSArray *factoidItemIndexes;

- (void).cxx_destruct;
- (id)initWithBusinessInfoModuleConfiguration:(id)a0;

@end
