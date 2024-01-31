@class NSString;
@protocol TFResolver;

@interface SXQuickLookModule : NSObject <SXQuickLookModule>

@property (readonly, nonatomic) id<TFResolver> resolver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithResolver:(id)a0;
- (void).cxx_destruct;
- (id)createViewControllerWithFile:(id)a0;

@end
