@class SXUnitConverter, NSString, SXColumnLayout;

@interface SXLayoutContext : NSObject <SXLayoutContext>

@property (readonly, nonatomic) SXColumnLayout *columnLayout;
@property (readonly, nonatomic) SXUnitConverter *unitConverter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithColumnLayout:(id)a0 unitConverter:(id)a1;

@end
