@class NSString;

@interface LDCMMobileAssetDistributor : NSObject <LDCMMobileAssetManagerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveBehaviorDictionary:(id)a0;

@end
