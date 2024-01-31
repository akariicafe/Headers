@class NSString, NSDictionary, NSURL, UIView;

@interface VUIActionShareSheet : VUIAction

@property (retain, nonatomic) NSString *urlString;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *imageURLStr;
@property (retain, nonatomic) NSString *sharedWatchId;
@property (retain, nonatomic) NSURL *sharedWatchUrl;
@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (retain, nonatomic) NSDictionary *groupActivityMetadata;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)initWithContextData:(id)a0 sourceView:(id)a1;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
