@class UIImage, _UIImageLoader, UIView;
@protocol _UIImageViewLoadingDelegate;

@interface _UIImageViewImageLoadingProperties : NSObject

@property (retain, nonatomic) _UIImageLoader *imageLoader;
@property (retain, nonatomic) id<_UIImageViewLoadingDelegate> loadingDelegate;
@property (retain, nonatomic) UIImage *imageBeingSetByLoader;
@property (retain, nonatomic) UIView *placeholderView;
@property (nonatomic, getter=isStartingLoad) BOOL startingLoad;
@property (nonatomic, getter=isEnqueueingLoad) BOOL enqueueingLoad;
@property (nonatomic, getter=isStoppingLoad) BOOL stoppingLoad;

- (void).cxx_destruct;

@end
