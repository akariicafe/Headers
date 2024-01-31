@class NSString;

@interface ICLiveLinkQueueEventContentUpdatedMessage : NSObject

@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedMessage;

- (id)description;
- (void).cxx_destruct;
- (id)initWithLocalizedTitle:(id)a0 localizedMessage:(id)a1;

@end
