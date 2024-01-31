@class NSNumber;

@interface CSStatusBarComponent : CSComponent

@property (nonatomic) long long fakeStatusBar;
@property (nonatomic) NSNumber *fakeStatusBarLevel;

- (id)init;
- (id)fakeStatusBar:(long long)a0;
- (id)fakeStatusBarLevel:(id)a0;

@end
