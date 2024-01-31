@protocol ASOOverlayConfiguration;

@interface SKOverlayConfiguration : NSObject

@property (readonly, retain, nonatomic) id<ASOOverlayConfiguration> _backing;

- (id)_init;
- (void).cxx_destruct;
- (id)initWithBacking:(id)a0;

@end
