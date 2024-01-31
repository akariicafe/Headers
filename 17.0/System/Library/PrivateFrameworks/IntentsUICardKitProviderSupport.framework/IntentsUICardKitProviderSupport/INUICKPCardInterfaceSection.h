@class NSSet, NSString;
@protocol CRCardSection;

@interface INUICKPCardInterfaceSection : INUIInterfaceSection <INUICKPInterfaceSectionModeling>

@property (retain, nonatomic) id<CRCardSection> cardSection;
@property (readonly, nonatomic) unsigned long long interactiveBehavior;
@property (copy, nonatomic) NSSet *parameters;
@property (readonly, nonatomic) BOOL isWildCardSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithInteractiveBehavior:(unsigned long long)a0 parameters:(id)a1;

@end
