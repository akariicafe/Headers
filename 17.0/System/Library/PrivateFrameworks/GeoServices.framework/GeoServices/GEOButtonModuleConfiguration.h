@class NSArray, GEOPDButtonModuleConfiguration;

@interface GEOButtonModuleConfiguration : NSObject {
    GEOPDButtonModuleConfiguration *_buttonModuleConfig;
}

@property (readonly, nonatomic) NSArray *buttonItems;

- (id)description;
- (void).cxx_destruct;
- (id)initWithButtonModuleConfiguration:(id)a0;

@end
