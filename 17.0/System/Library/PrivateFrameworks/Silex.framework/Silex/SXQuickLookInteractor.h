@class NSString, SXQuickLookFile;
@protocol SXQuickLookService, SXQuickLookInteractorDelegate;

@interface SXQuickLookInteractor : NSObject <SXQuickLookInteractor>

@property (readonly, nonatomic) id<SXQuickLookService> service;
@property (weak, nonatomic) id<SXQuickLookInteractorDelegate> delegate;
@property (readonly, nonatomic) SXQuickLookFile *file;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFile:(id)a0 service:(id)a1;
- (void)loadThumbnailWithSize:(struct CGSize { double x0; double x1; })a0;

@end
