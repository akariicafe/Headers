@class NSURL, NSString;

@interface SSUInstalledAppProviderSandbox : NSObject <SSUInstalledAppProvider>

@property (readonly, nonatomic) NSURL *directory;
@property (readonly, nonatomic) NSString *locale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
