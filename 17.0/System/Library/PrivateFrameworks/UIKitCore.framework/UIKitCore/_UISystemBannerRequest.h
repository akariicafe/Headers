@class NSString, _UIOverlayService;

@interface _UISystemBannerRequest : NSObject <BSXPCSecureCoding> {
    _UIOverlayService *_overlayService;
}

@property (retain, nonatomic) NSString *primaryTitleText;
@property (retain, nonatomic) NSString *secondaryTitleText;
@property (nonatomic) double preferredMinimumBannerWidth;
@property (nonatomic) double preferredMaximumBannerWidth;
@property (nonatomic) double bannerTimeoutDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)init;
- (id)initWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)postBanner;
- (void)verifyParameters;

@end
