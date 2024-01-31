@interface MTRCommissionableBrowserResultInterfaces : NSObject

@property (nonatomic) struct Optional<chip::Dnssd::CommonResolutionData> { BOOL mHasValue; union Value { struct CommonResolutionData { struct InterfaceId { unsigned int mPlatformInterface; } interfaceId; unsigned long long numIPs; struct IPAddress { unsigned int Addr[4]; } ipAddress[5]; unsigned short port; char hostName[17]; BOOL supportsTcp; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { BOOL mHasValue; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mData; } mValue; } mrpRetryIntervalIdle; struct Optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { BOOL mHasValue; union Value { struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int __rep_; } mData; } mValue; } mrpRetryIntervalActive; } mData; } mValue; } resolutionData;

- (id).cxx_construct;
- (void).cxx_destruct;

@end
