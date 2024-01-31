@class NSString;
@protocol MTLResourceGroupSPI;

@interface PTMTLDropHints : NSObject {
    id<MTLResourceGroupSPI> _resourceGroup;
    NSString *_name;
    int _count;
}

@property BOOL enabled;

- (void).cxx_destruct;
- (void)dropHintsFor:(id)a0;
- (id)initWithMetalContext:(id)a0 resources:(id)a1 name:(id)a2;
- (id)initWithMetalContext:(id)a0 resources:(id)a1 name:(id)a2 enabled:(BOOL)a3;
- (void)setDropHintsFor:(id)a0;

@end
