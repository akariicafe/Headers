@class NSString;
@protocol SXPresentationAttributesProvider;

@interface SXLayoutInstructionFactory : NSObject <SXLayoutInstructionFactory>

@property (readonly, nonatomic) id<SXPresentationAttributesProvider> presentationAttributesProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createInstructions;
- (id)initWithPresentationAttributesProvider:(id)a0;

@end
