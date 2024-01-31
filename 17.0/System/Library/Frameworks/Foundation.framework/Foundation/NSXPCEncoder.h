@class NSObject, NSXPCConnection;
@protocol OS_xpc_object, NSXPCEncoderDelegate;

@interface NSXPCEncoder : NSXPCCoder {
    NSObject<OS_xpc_object> *_oolObjects;
    struct __CFDictionary { } *_replacedByDelegateObjects;
    struct { unsigned long long collectionSizeOffset[1024]; long long collectionRecursionIndex; unsigned long long dataLen; unsigned long long dataSize; char *data; struct __CFDictionary *_objectReferences; struct __CFDictionary *_stringReferences; struct __CFDictionary *_asciiReferences; BOOL isVM; BOOL isStack; } _encoder;
    unsigned long long _genericIndex;
    BOOL _topLevelDictionary;
    BOOL _finished;
    BOOL _askForReplacement;
}

@property NSXPCConnection *_connection;
@property id<NSXPCEncoderDelegate> delegate;

- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (id)_newRootXPCObject;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)_startTopLevelDictionary;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (id)init;
- (void)encodeValueOfObjCType:(const char *)a0 at:(const void *)a1;
- (void)_encodeUnkeyedObject:(id)a0;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)dealloc;
- (void)encodeXPCObject:(id)a0 forKey:(id)a1;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (id)initWithStackSpace:(char *)a0 size:(unsigned long long)a1;
- (void)_encodeInvocation:(id)a0 isReply:(BOOL)a1 into:(id)a2;
- (void)encodeObject:(id)a0;
- (BOOL)allowsKeyedCoding;
- (unsigned long long)_addOOLXPCObject:(id)a0;
- (id)connection;
- (id)_replaceObject:(id)a0;
- (void)_encodeInvocationObjectArgumentsOnly:(id *)a0 count:(unsigned long long)a1 typeString:(const char *)a2 selector:(SEL)a3 isReply:(BOOL)a4 into:(id)a5;
- (void)encodeDataObject:(id)a0;
- (void)_encodeObject:(id)a0;
- (void)_checkObject:(id)a0;
- (void)encodeConditionalObject:(id)a0 forKey:(id)a1;
- (id)debugDescription;
- (void)_encodeArrayOfObjects:(id)a0 forKey:(id)a1;
- (void)_encodeCString:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;

@end
