@class NSURL, NSString;

@interface PXPlaceholder : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *fallbackActionTitle;

+ (id)featureNotEnabledWithDocumentationURLString:(id)a0;
+ (id)featureNotImplementedWithTrackingRadar:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)performFallbackAction;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 fallbackActionTitle:(id)a2 url:(id)a3;
- (id)initWithTitle:(id)a0 trackingRadar:(long long)a1;

@end
