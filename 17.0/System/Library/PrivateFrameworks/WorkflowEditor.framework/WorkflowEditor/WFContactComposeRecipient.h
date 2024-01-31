@class WFContact;

@interface WFContactComposeRecipient : CNComposeRecipient

@property (readonly, nonatomic) WFContact *wfContact;

- (id)displayString;
- (void).cxx_destruct;
- (id)initWithWFContact:(id)a0;
- (id)wf_contactFieldEntry;

@end
