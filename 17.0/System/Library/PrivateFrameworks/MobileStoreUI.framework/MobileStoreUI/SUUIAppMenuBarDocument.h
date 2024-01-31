@class NSString, IKAppContext;

@interface SUUIAppMenuBarDocument : IKAppMenuBarDocument <SUUIDOMFeature>

@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, weak, nonatomic) IKAppContext *appContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)featureName;


@end
