@class NSString;

@interface POKerberosMapping : NSObject

@property (retain, nonatomic) NSString *ticketKeyPath;
@property (retain, nonatomic) NSString *messageBufferKeyName;
@property (retain, nonatomic) NSString *realmKeyName;
@property (retain, nonatomic) NSString *serviceNameKeyName;
@property (retain, nonatomic) NSString *clientNameKeyName;
@property (retain, nonatomic) NSString *encryptionKeyTypeKeyName;
@property (retain, nonatomic) NSString *sessionKeyKeyName;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;

@end
