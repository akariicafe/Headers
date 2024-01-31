@class NSString, NSData;

@interface MRGenericMessage : MRProtocolMessage

@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) NSData *data;

- (unsigned long long)type;
- (id)initWithKey:(id)a0 data:(id)a1;

@end
