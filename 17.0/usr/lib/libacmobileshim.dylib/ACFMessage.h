@class NSString, NSMutableDictionary;

@interface ACFMessage : NSObject <ACFGeneralMessageProtocol, ACFErrorReportingProtocol> {
    NSMutableDictionary *_mutableInfo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)message;
+ (id)messageWithIdentifier:(id)a0;
+ (id)messageWithInfo:(id)a0;

- (void)dealloc;
- (long long)errorCode;
- (void)setIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setInfo:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)identifier;
- (void)setError:(id)a0;
- (id)info;
- (id)initWithInfo:(id)a0;
- (id)errorMessage;
- (id)objectForKey:(id)a0;
- (id)error;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearError;
- (id)mutableInfo;
- (int)senderProcessID;
- (id)senderPortName;
- (id)senderProcessName;
- (void)setSenderPortName:(id)a0;
- (void)setSenderProcessID:(int)a0;
- (void)setSenderProcessName:(id)a0;

@end
