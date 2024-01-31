@class NSString;
@protocol BLSHFlipbookPowerSavingProviding;

@interface BLSHDisableFlipbookPowerSavingAttributeHandler : NSObject <BLSHAssertionAttributeHandler> {
    id<BLSHFlipbookPowerSavingProviding> _provider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)registerHandlerForService:(id)a0 provider:(id)a1;

@end
