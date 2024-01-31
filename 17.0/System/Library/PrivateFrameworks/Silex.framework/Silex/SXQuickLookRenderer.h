@class NSString;
@protocol SXQuickLookStyler;

@interface SXQuickLookRenderer : NSObject <SXQuickLookRenderer>

@property (readonly, nonatomic) id<SXQuickLookStyler> styler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyler:(id)a0;
- (void).cxx_destruct;
- (void)render:(id)a0 attributes:(id)a1;
- (void)renderErrorMessage:(id)a0 view:(id)a1;
- (void)renderThumbnailImage:(id)a0 view:(id)a1;

@end
