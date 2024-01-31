@class NSString, NSNumber, NSURL;

@interface ASDClipCardMetricsEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *itemID;
@property (retain, nonatomic) NSString *referralSource;
@property (retain, nonatomic) NSString *referralSourceBundleID;
@property (retain, nonatomic) NSString *referrerType;
@property (nonatomic) BOOL thirdPartyWithNoAppReferrer;
@property (retain, nonatomic) NSURL *sourceURL;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithClipBundleID:(id)a0;

@end
