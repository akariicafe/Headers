@class NSString, NSArray, NSURL;

@interface APPCNativeLayoutRepresentation : APPCContentRepresentation {
    void /* unknown type, empty encoding */ headline;
    void /* unknown type, empty encoding */ accessibilityHeadline;
    void /* unknown type, empty encoding */ adCopy;
    void /* unknown type, empty encoding */ accessibilityAdCopy;
    void /* unknown type, empty encoding */ sponsoredBy;
    void /* unknown type, empty encoding */ elements;
    void /* unknown type, empty encoding */ sponsoredByAssetURL;
    void /* unknown type, empty encoding */ sponsoredByAssetProxyURL;
    void /* unknown type, empty encoding */ actionURL;
}

@property (nonatomic, readonly) NSString *headline;
@property (nonatomic, readonly) NSString *accessibilityHeadline;
@property (nonatomic, readonly) NSString *adCopy;
@property (nonatomic, readonly) NSString *accessibilityAdCopy;
@property (nonatomic, readonly) NSString *sponsoredBy;
@property (nonatomic, readonly) NSArray *elements;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ adFormatType;
@property (nonatomic, readonly) NSURL *sponsoredByAssetURL;
@property (nonatomic, readonly) NSURL *sponsoredByAssetProxyURL;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ button;
@property (nonatomic, readonly) NSURL *actionURL;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 adIdentifier:(id)a1 adType:(long long)a2 desiredPosition:(long long)a3 privacyMarkerPosition:(long long)a4 adSize:(struct CGSize { double x0; double x1; })a5 headline:(id)a6 accessibilityHeadline:(id)a7 adCopy:(id)a8 accessibilityAdCopy:(id)a9 sponsoredBy:(id)a10 elements:(id)a11 adPolicyData:(id)a12 adFormatType:(long long)a13 sponsoredByAssetURL:(id)a14 button:(id)a15 actionURL:(id)a16;

@end
