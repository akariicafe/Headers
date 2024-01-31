@class NSString;

@interface SOSRecipient : NSObject

@property (copy, nonatomic) NSString *handle;
@property (nonatomic) unsigned long long reasons;

+ (id)handlesFromRecipients:(id)a0;
+ (id)reasonsDictionaryFromRecipients:(id)a0;

- (void).cxx_destruct;

@end
