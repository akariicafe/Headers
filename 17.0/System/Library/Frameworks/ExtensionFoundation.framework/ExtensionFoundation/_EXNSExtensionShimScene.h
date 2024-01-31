@class NSString, NSExtensionContext;

@interface _EXNSExtensionShimScene : NSObject <_EXScene>

@property (retain) NSExtensionContext *context;
@property (retain) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
