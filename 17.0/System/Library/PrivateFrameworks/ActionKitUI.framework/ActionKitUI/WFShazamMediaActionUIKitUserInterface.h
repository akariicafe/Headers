@class NSString;

@interface WFShazamMediaActionUIKitUserInterface : WFEmbeddableActionUserInterface <WFShazamMediaActionUserInterface>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
