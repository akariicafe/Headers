@class NSURL, NSData, NSString;

@interface FKSuggestionsWalletOrderAttachment : NSObject

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy, nonatomic) NSString *fullyQualifiedOrderIdentifier;
@property (nonatomic) unsigned long long orderState;

+ (id)readContentsOfOrderAtURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 data:(id)a1 fqoid:(id)a2 state:(unsigned long long)a3;

@end
