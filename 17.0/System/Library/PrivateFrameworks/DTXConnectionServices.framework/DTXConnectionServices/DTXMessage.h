@class NSSet, NSDictionary, NSData, NSError;
@protocol NSSecureCoding, NSObject;

@interface DTXMessage : NSObject {
    unsigned int _messageType;
    int _compressionType;
    NSData *_serializedData;
    id<NSSecureCoding, NSObject> _payloadObject;
    void *_auxiliary;
    _Atomic BOOL _immutable;
    NSDictionary *_auxiliaryPromoted;
}

@property (class, readonly) NSSet *defaultAllowedSecureCodingClasses;

@property (nonatomic) unsigned int messageType;
@property (copy, nonatomic) id<NSSecureCoding, NSObject> payloadObject;
@property (readonly, nonatomic) BOOL deserialized;
@property (readonly, nonatomic) BOOL isDispatch;
@property (readonly, nonatomic) BOOL isBarrier;
@property (readonly, nonatomic) unsigned long long cost;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned int errorStatus;
@property (nonatomic) BOOL expectsReply;
@property (nonatomic) unsigned int identifier;
@property (nonatomic) unsigned int channelCode;
@property (nonatomic) unsigned int conversationIndex;
@property (readonly, nonatomic) unsigned long long serializedLength;
@property (readonly, nonatomic) id<NSSecureCoding, NSObject> object;
@property (readonly, nonatomic) NSData *data;

+ (id)message;
+ (void)initialize;
+ (id)messageWithBuffer:(const void *)a0 length:(unsigned long long)a1;
+ (id)messageWithData:(id)a0;
+ (BOOL)extractSerializedCompressionInfoFromBuffer:(const char *)a0 length:(unsigned long long)a1 compressionType:(int *)a2 uncompressedLength:(unsigned long long *)a3 compressedDataOffset:(unsigned long long *)a4;
+ (id)messageReferencingBuffer:(const void *)a0 length:(unsigned long long)a1 destructor:(id /* block */)a2;
+ (id)messageWithError:(id)a0;
+ (id)messageWithObject:(id)a0;
+ (id)messageWithPrimitive:(void *)a0;
+ (id)messageWithSelector:(SEL)a0 arguments:(id)a1;
+ (id)messageWithSelector:(SEL)a0 objectArguments:(id)a1;
+ (id)messageWithSelector:(SEL)a0 typesAndArguments:(unsigned int)a1;
+ (void)setReportCompressionBlock:(id /* block */)a0;

- (id)initWithInvocation:(id)a0;
- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)_appendTypesAndValues:(unsigned int)a0 withKey:(id)a1 list:(char *)a2;
- (id)_decompressedData:(id)a0 compressor:(id)a1 compressionType:(int)a2;
- (id)_faultAuxiliaryValueOfType:(Class)a0 forKey:(id)a1;
- (id)_initWithReferencedSerializedForm:(id)a0 compressor:(id)a1 payloadSet:(id /* block */)a2;
- (void)_makeBarrier;
- (void)_makeImmutable;
- (id)_mutableAuxiliaryDictionary;
- (void)_setPayloadBuffer:(const char *)a0 length:(unsigned long long)a1 shouldCopy:(BOOL)a2 destructor:(id /* block */)a3;
- (void)_willModifyAuxiliary;
- (void)compressWithCompressor:(id)a0 usingType:(int)a1 forCompatibilityWithVersion:(long long)a2;
- (id)dataForMessageKey:(id)a0;
- (id)descriptionWithRoutingInformation:(struct DTXMessageRoutingInfo { unsigned int x0; unsigned int x1; unsigned int x2; unsigned char x3 : 1; unsigned int x4 : 31; })a0;
- (const void *)getBufferWithReturnedLength:(unsigned long long *)a0;
- (id)initWithSelector:(SEL)a0 firstArg:(id)a1 remainingObjectArgs:(char *)a2;
- (id)initWithSelector:(SEL)a0 objects:(id)a1;
- (id)initWithSerializedForm:(id)a0 compressor:(id)a1;
- (id)initWithSerializedForm:(const char *)a0 length:(unsigned long long)a1 destructor:(id /* block */)a2 compressor:(id)a3;
- (long long)integerForMessageKey:(id)a0;
- (void)invokeWithTarget:(id)a0 replyChannel:(id)a1 validator:(id /* block */)a2;
- (id)newReply;
- (id)newReplyReferencingBuffer:(const void *)a0 length:(unsigned long long)a1 destructor:(id /* block */)a2;
- (id)newReplyWithError:(id)a0;
- (id)newReplyWithMessage:(id)a0;
- (id)newReplyWithObject:(id)a0;
- (id)objectWithAllowedClasses:(id)a0;
- (void)serializedFormApply:(id /* block */)a0;
- (void)setData:(id)a0 forMessageKey:(id)a1;
- (void)setInteger:(long long)a0 forMessageKey:(id)a1;
- (void)setObject:(id)a0 forMessageKey:(id)a1;
- (void)setString:(id)a0 forMessageKey:(id)a1;
- (BOOL)shouldInvokeWithTarget:(id)a0;
- (id)stringForMessageKey:(id)a0;
- (id)valueForMessageKey:(id)a0;

@end
