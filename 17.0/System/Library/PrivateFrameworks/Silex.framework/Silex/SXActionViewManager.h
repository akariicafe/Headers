@class NSString;
@protocol SXViewControllerPresenting;

@interface SXActionViewManager : NSObject <SXActionViewManager>

@property (readonly, nonatomic) id<SXViewControllerPresenting> viewControllerPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithViewControllerPresenting:(id)a0;
- (void)presentActivityGroup:(id)a0 action:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 completion:(id /* block */)a4;

@end
