@class UIBarButtonItem, NSString, UIView;

@interface SFBlockBasedPopoverSourceInfo : NSObject <_SFPopoverSourceInfo> {
    id /* block */ _sourceInfoProvider;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } popoverSourceRect;
@property (readonly, nonatomic) UIView *popoverSourceView;
@property (readonly, nonatomic) BOOL shouldDismissIfSourceRemovedAfterRepositioning;
@property (nonatomic) BOOL shouldPassthroughSuperview;
@property (nonatomic) BOOL shouldHideArrow;
@property (nonatomic) unsigned long long permittedArrowDirections;
@property (nonatomic) long long provenance;
@property (readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSourceInfoProvider:(id /* block */)a0;

@end
