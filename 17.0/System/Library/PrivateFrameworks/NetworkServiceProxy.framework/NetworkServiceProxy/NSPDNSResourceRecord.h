@class NSString;

@interface NSPDNSResourceRecord : NSObject

@property (readonly) long long type;
@property (readonly) NSString *name;
@property (readonly) long long recordClass;
@property (readonly) unsigned long long timeToLive;
@property (readonly) unsigned long long dataLength;
@property (readonly) NSString *resourceString;

+ (id)typeToString:(long long)a0;

- (void).cxx_destruct;
- (id)copyStateDictionary;
- (id)initFromByteParser:(id)a0;

@end
