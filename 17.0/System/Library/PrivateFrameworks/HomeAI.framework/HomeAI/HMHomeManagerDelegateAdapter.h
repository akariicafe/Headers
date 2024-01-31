@class NSString;

@interface HMHomeManagerDelegateAdapter : NSObject <HMHomeManagerDelegate>

@property (copy) id /* block */ didUpdateHomes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)homeManagerDidUpdateHomes:(id)a0;

@end
