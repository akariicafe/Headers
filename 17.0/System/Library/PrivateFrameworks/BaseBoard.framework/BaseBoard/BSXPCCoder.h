@class NSString, NSKeyedArchiver, NSObject, NSKeyedUnarchiver;
@protocol OS_xpc_object;

@interface BSXPCCoder : NSObject <BSDescriptionProviding, BSXPCSecureCoding, BSXPCEncoding, BSXPCDecoding> {
    NSObject<OS_xpc_object> *_message;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_xpc_object> *_codingContext;
    NSKeyedArchiver *_archiver;
    NSKeyedUnarchiver *_unarchiver;
    int _finalized;
}

@property (readonly, retain, nonatomic) NSObject<OS_xpc_object> *message;
@property (readonly, retain, nonatomic) NSObject<OS_xpc_object> *XPCConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)_testEncodeAndDecodeObject:(id)a0 ofClass:(Class)a1;
+ (id)coderWithMessage:(id)a0;
+ (id)coder;

- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (BOOL)containsValueForKey:(id)a0;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (id)init;
- (void)encodeUInt64:(unsigned long long)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)dealloc;
- (void)encodeXPCObject:(id)a0 forKey:(id)a1;
- (void)encodeCGPoint:(struct CGPoint { double x0; double x1; })a0 forKey:(id)a1;
- (id)succinctDescriptionBuilder;
- (BOOL)decodeBoolForKey:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (unsigned long long)decodeUInt64ForKey:(id)a0;
- (void)_removeValueForKey:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s { } *)a0 forKey:(id)a1;
- (id)decodeCollectionOfClass:(Class)a0 containingClass:(Class)a1 forKey:(id)a2;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)encodeDictionary:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)succinctDescription;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })decodeCGRectForKey:(id)a0;
- (id)decodeStringForKey:(id)a0;
- (id)_implicitDecodeXPCObjectForKey:(id)a0;
- (void)encodeCollection:(id)a0 forKey:(id)a1;
- (id)decodeDictionaryOfClass:(Class)a0 forKey:(id)a1;
- (id)_finishCoding;
- (long long)decodeInt64ForKey:(id)a0;
- (id)createMessage;
- (void)encodeCGRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forKey:(id)a1;
- (struct CGPoint { double x0; double x1; })decodeCGPointForKey:(id)a0;
- (struct CGSize { double x0; double x1; })decodeCGSizeForKey:(id)a0;
- (void)encodeCGSize:(struct CGSize { double x0; double x1; })a0 forKey:(id)a1;

@end
