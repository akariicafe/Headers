@class UIApplication, NSString;

@interface SXHostApplication : NSObject <SXHost>

@property (weak, nonatomic) UIApplication *application;
@property (readonly, nonatomic) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
