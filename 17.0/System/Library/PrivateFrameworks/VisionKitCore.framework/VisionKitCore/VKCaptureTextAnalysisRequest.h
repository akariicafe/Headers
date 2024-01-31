@class UIImage, NSString, VKQuad;
@protocol VKCaptureTextAnalysisRequestDelegate;

@interface VKCaptureTextAnalysisRequest : NSObject <NSCopying, VKFeedbackAssetsProvider>

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) VKQuad *focusQuad;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } focusRect;
@property (readonly, weak, nonatomic) id<VKCaptureTextAnalysisRequestDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)requestHandler;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithImage:(id)a0 delegate:(id)a1;
- (id)initWithImage:(id)a0 focusQuad:(id)a1 delegate:(id)a2;
- (id)initWithImage:(id)a0 focusRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 delegate:(id)a2;
- (BOOL)saveAssetsToFeedbackAttachmentsFolder:(id)a0 error:(id *)a1;

@end
