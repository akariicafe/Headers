@class NSString, NSData;

@interface AppleTypeCRetimerBoardIDFile : NSObject

@property (readonly) NSString *tag;
@property (readonly) unsigned int magic;
@property (readonly) unsigned short version;
@property (readonly) unsigned long long boardID;
@property (readonly) unsigned short chipID;
@property (readonly) unsigned char portNumber;
@property (readonly) unsigned char boardRevision;
@property (readonly) unsigned char securityDomain;
@property (readonly) NSData *data;

- (id)description;
- (void).cxx_destruct;
- (id)generateSubfileData;
- (id)initWithBoardID:(unsigned long long)a0 chipID:(unsigned short)a1 portNumber:(unsigned char)a2 securityDomain:(unsigned char)a3;

@end
