@class NSString, UIImage;

@interface RemoteUIControllerPreferences : NSObject

@property (nonatomic) BOOL showSpinner;
@property (retain, nonatomic) NSString *spinnerLabel;
@property (retain, nonatomic) UIImage *navBarImage;
@property (retain, nonatomic) NSString *navBarImageLabel;

- (void).cxx_destruct;
- (id)initWithSpinner:(BOOL)a0;
- (id)initWithSpinner:(BOOL)a0 spinnerLabel:(id)a1;
- (id)initWithSpinner:(BOOL)a0 spinnerLabel:(id)a1 navBarImage:(id)a2 navBarImageLabel:(id)a3;

@end
