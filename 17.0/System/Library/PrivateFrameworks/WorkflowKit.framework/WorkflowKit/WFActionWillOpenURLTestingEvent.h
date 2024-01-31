@class NSURL, NSString;

@interface WFActionWillOpenURLTestingEvent : WFActionTestingEvent

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)initWithAction:(id)a0 URL:(id)a1 bundleIdentifier:(id)a2;

@end
