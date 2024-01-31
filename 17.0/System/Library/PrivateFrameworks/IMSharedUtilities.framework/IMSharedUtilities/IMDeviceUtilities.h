@interface IMDeviceUtilities : NSObject

@property (class, readonly, nonatomic) BOOL deviceIsLockedDown;
@property (class, readonly, nonatomic) BOOL supportsDataDetectors;
@property (class, readonly, nonatomic) BOOL supportsBusinessChat;
@property (class, readonly, nonatomic) BOOL supportsSpotlight;
@property (class, readonly, nonatomic) BOOL supportsSharedWithYou;
@property (class, readonly, nonatomic) BOOL supportsFaceTime;
@property (class, readonly, nonatomic) BOOL supportsNameAndPhoto;
@property (class, readonly, nonatomic) BOOL supportsFocus;
@property (class, readonly, nonatomic) BOOL supportsScreenEffects;
@property (class, nonatomic) BOOL supportsiMessageJunk;

+ (BOOL)IMSupportsASTC;
+ (BOOL)IMDeviceIsChinaRegion;
+ (BOOL)IMDeviceRegionIsEligibleToBeForcedIntoFilteringUnknownSender;
+ (BOOL)IMDeviceIsGreenTea;
+ (BOOL)IMDeviceIsIndiaRegion;

@end
