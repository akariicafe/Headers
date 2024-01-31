@class NSXPCConnection;
@protocol NSObject;

@interface NSXPCCoder : NSCoder

@property (retain) id<NSObject> userInfo;
@property (readonly) NSXPCConnection *connection;

+ (id)_testEncodeAndDecodeInvocation:(id)a0 interface:(id)a1;
+ (id)_testEncodeAndDecodeObject:(id)a0 allowedClass:(Class)a1;
+ (id)_testEncodeAndDecodeObject:(id)a0 allowedClasses:(id)a1;

- (id)init;
- (void)dealloc;
- (void)encodeXPCObject:(id)a0 forKey:(id)a1;
- (id)decodeXPCObjectForKey:(id)a0;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s { } *)a0 forKey:(id)a1;
- (BOOL)requiresSecureCoding;

@end
