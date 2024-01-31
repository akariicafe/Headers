@class NSString;

@interface WFGallerySessionStartEvent : WFEvent

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *sessionIdentifier;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
