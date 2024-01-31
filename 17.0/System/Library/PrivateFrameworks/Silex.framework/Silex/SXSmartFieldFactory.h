@class NSString;
@protocol SXActionProvider, SXActionSerializer;

@interface SXSmartFieldFactory : NSObject <SXSmartFieldFactory>

@property (readonly, nonatomic) id<SXActionProvider> actionProvider;
@property (readonly, nonatomic) id<SXActionSerializer> actionSerializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithActionProvider:(id)a0 actionSerializer:(id)a1;
- (id)smartFieldForAddition:(id)a0 withContext:(id)a1;

@end
