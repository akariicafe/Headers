@class NSDictionary, IKAppBrowserBridge;

@interface IKJSBrowser : IKJSObject <IKJSBrowser>

@property (retain, nonatomic) IKAppBrowserBridge *bridge;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double interitemSpacing;
@property (retain, nonatomic) NSDictionary *maskInset;

- (void)present;
- (void).cxx_destruct;

@end
