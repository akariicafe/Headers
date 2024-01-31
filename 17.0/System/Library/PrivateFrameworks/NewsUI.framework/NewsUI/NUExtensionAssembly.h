@class NSString;
@protocol NUExtensionContextProvider;

@interface NUExtensionAssembly : NSObject <TFAssembly>

@property (readonly, weak, nonatomic) id<NUExtensionContextProvider> extensionContextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadInRegistry:(id)a0;
- (void).cxx_destruct;
- (id)initWithExtensionContextProvider:(id)a0;

@end
