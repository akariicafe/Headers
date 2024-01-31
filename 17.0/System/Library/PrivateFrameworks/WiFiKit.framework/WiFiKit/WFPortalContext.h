@class NSString;

@interface WFPortalContext : NSObject

@property (copy, nonatomic) NSString *venueInfoURL;
@property (copy, nonatomic) NSString *userPortalURL;

- (void).cxx_destruct;
- (id)initWithCaptiveProfile:(id)a0;
- (id)portalURLForDisplay;

@end
