@class TRIPBUnknownFieldSet, NSMutableDictionary, TRIPBFieldDescriptor, TRIPBExtensionDescriptor;

@interface TRIPBMessage : NSObject <NSSecureCoding, NSCopying> {
    TRIPBUnknownFieldSet *unknownFields_;
    NSMutableDictionary *extensionMap_;
    NSMutableDictionary *autocreatedExtensionMap_;
    TRIPBMessage *autocreator_;
    TRIPBFieldDescriptor *autocreatorField_;
    TRIPBExtensionDescriptor *autocreatorExtension_;
    _Atomic id readOnlySemaphore_;
    struct TRIPBMessage_Storage { unsigned int x0[0]; } *messageStorage_;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) TRIPBUnknownFieldSet *unknownFields;
@property (readonly, nonatomic, getter=isInitialized) BOOL initialized;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)message;
+ (void)initialize;
+ (id)descriptor;
+ (BOOL)resolveInstanceMethod:(SEL)a0;
+ (id)parseFromData:(id)a0 error:(id *)a1;
+ (BOOL)resolveClassMethod:(SEL)a0;
+ (id)parseDelimitedFromCodedInputStream:(id)a0 extensionRegistry:(id)a1 error:(id *)a2;
+ (id)parseFromCodedInputStream:(id)a0 extensionRegistry:(id)a1 error:(id *)a2;
+ (id)parseFromData:(id)a0 extensionRegistry:(id)a1 error:(id *)a2;

- (void)clear;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithData:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)descriptor;
- (id)data;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyFieldsInto:(id)a0 zone:(struct _NSZone { } *)a1 descriptor:(id)a2;
- (void)writeField:(id)a0 toCodedOutputStream:(id)a1;
- (void)clearExtension:(id)a0;
- (void)addExtension:(id)a0 value:(id)a1;
- (void)addUnknownMapEntry:(int)a0 value:(id)a1;
- (id)delimitedData;
- (id)extensionsCurrentlySet;
- (id)getExistingExtension:(id)a0;
- (id)getExtension:(id)a0;
- (BOOL)hasExtension:(id)a0;
- (id)initWithCodedInputStream:(id)a0 extensionRegistry:(id)a1 error:(id *)a2;
- (id)initWithData:(id)a0 extensionRegistry:(id)a1 error:(id *)a2;
- (void)internalClear:(BOOL)a0;
- (void)mergeDelimitedFromCodedInputStream:(id)a0 extensionRegistry:(id)a1;
- (void)mergeFromCodedInputStream:(id)a0 extensionRegistry:(id)a1;
- (void)mergeFromData:(id)a0 extensionRegistry:(id)a1;
- (void)parseMessageSet:(id)a0 extensionRegistry:(id)a1;
- (BOOL)parseUnknownField:(id)a0 extensionRegistry:(id)a1 tag:(unsigned int)a2;
- (unsigned long long)serializedSize;
- (void)setExtension:(id)a0 index:(unsigned long long)a1 value:(id)a2;
- (void)setExtension:(id)a0 value:(id)a1;
- (void)writeDelimitedToCodedOutputStream:(id)a0;
- (void)writeDelimitedToOutputStream:(id)a0;
- (void)writeExtensionsToCodedOutputStream:(id)a0 range:(struct TRIPBExtensionRange { unsigned int x0; unsigned int x1; })a1;
- (void)writeToCodedOutputStream:(id)a0;
- (void)writeToOutputStream:(id)a0;

@end
