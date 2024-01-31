@class NSString;
@protocol PXDisplayAsset;

@interface PXMessagesDebugTapbackUserData : NSObject <PXTapbackUserData>

@property (retain, nonatomic) id<PXDisplayAsset> asset;
@property (nonatomic) BOOL shouldAnimate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
