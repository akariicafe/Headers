@class NSString;

@interface PXBannerViewConfiguration : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *actionButtonTitle;
@property (readonly, copy, nonatomic) NSString *cancelButtonTitle;
@property (readonly, copy, nonatomic) id /* block */ actionButtonHandler;
@property (readonly, copy, nonatomic) id /* block */ cancelButtonHandler;
@property (readonly, copy, nonatomic) NSString *primaryActionIdentifier;
@property (readonly, copy, nonatomic) NSString *cancelActionIdentifier;
@property (readonly, nonatomic) BOOL wantsActionButton;
@property (readonly, nonatomic) BOOL wantsCancelButton;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 actionButtonTitle:(id)a2 cancelButtonTitle:(id)a3 actionButtonHandler:(id /* block */)a4 cancelButtonHandler:(id /* block */)a5 primaryActionIdentifier:(id)a6 cancelActionIdentifier:(id)a7;

@end
