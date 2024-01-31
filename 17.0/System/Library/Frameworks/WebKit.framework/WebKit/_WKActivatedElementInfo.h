@class NSString, NSDictionary, NSURL, UIImage;

@interface _WKActivatedElementInfo : NSObject {
    struct RetainPtr<NSURL> { void *m_ptr; } _URL;
    struct RetainPtr<NSURL> { void *m_ptr; } _imageURL;
    struct RetainPtr<NSString> { void *m_ptr; } _title;
    struct IntPoint { int m_x; int m_y; } _interactionLocation;
    struct RetainPtr<NSString> { void *m_ptr; } _ID;
    struct RefPtr<WebKit::ShareableBitmap, WTF::RawPtrTraits<WebKit::ShareableBitmap>, WTF::DefaultRefDerefTraits<WebKit::ShareableBitmap>> { struct ShareableBitmap *m_ptr; } _image;
    struct RetainPtr<NSString> { void *m_ptr; } _imageMIMEType;
    struct RetainPtr<UIImage> { void *m_ptr; } _cocoaImage;
    struct RetainPtr<NSDictionary> { void *m_ptr; } _userInfo;
    BOOL _isAnimating;
    BOOL _canShowAnimationControls;
    struct Vector<WebCore::ElementAnimationContext, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct ElementAnimationContext *m_buffer; unsigned int m_capacity; unsigned int m_size; } _animationsUnderElement;
    BOOL _animatedImage;
    BOOL _isImage;
    BOOL _isUsingAlternateURLForImage;
}

@property (readonly, nonatomic) NSString *imageMIMEType;
@property (readonly, nonatomic) struct IntPoint { int x0; int x1; } _interactionLocation;
@property (readonly, nonatomic) BOOL _isImage;
@property (readonly, nonatomic) BOOL _isUsingAlternateURLForImage;
@property (readonly, nonatomic) const void *_animationsUnderElement;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingRect;
@property (readonly, nonatomic) NSString *ID;
@property (readonly, nonatomic) BOOL isAnimatedImage;
@property (readonly, nonatomic) BOOL isAnimating;
@property (readonly, nonatomic) BOOL canShowAnimationControls;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, copy, nonatomic) UIImage *image;

+ (id)activatedElementInfoWithInteractionInformationAtPosition:(const void *)a0 userInfo:(id)a1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithInteractionInformationAtPosition:(const void *)a0 isUsingAlternateURLForImage:(BOOL)a1 userInfo:(id)a2;
- (id)_initWithType:(long long)a0 URL:(id)a1 image:(void *)a2 information:(const void *)a3;
- (id)_initWithType:(long long)a0 URL:(id)a1 imageURL:(id)a2 image:(void *)a3 userInfo:(id)a4 information:(const void *)a5;
- (id)_initWithType:(long long)a0 URL:(id)a1 imageURL:(id)a2 information:(const void *)a3;
- (id)_initWithType:(long long)a0 URL:(id)a1 imageURL:(id)a2 location:(const struct IntPoint { int x0; int x1; } *)a3 title:(id)a4 ID:(id)a5 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 image:(void *)a7 imageMIMEType:(id)a8 isAnimatedImage:(BOOL)a9 isAnimating:(BOOL)a10 canShowAnimationControls:(BOOL)a11 animationsUnderElement:(struct Vector<WebCore::ElementAnimationContext, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct ElementAnimationContext *x0; unsigned int x1; unsigned int x2; })a12 userInfo:(id)a13;
- (id)_initWithType:(long long)a0 URL:(id)a1 imageURL:(id)a2 userInfo:(id)a3 information:(const void *)a4;
- (id)_initWithType:(long long)a0 URL:(id)a1 information:(const void *)a2;
- (id)_initWithType:(long long)a0 image:(void *)a1 information:(const void *)a2;

@end
