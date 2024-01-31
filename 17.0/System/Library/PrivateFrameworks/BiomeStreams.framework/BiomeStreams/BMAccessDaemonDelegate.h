@class NSString;

@interface BMAccessDaemonDelegate : NSObject <BMAccessDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)prepareResource:(id)a0 withMode:(unsigned long long)a1;

@end
