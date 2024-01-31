@class NSString, NSDictionary, NSData, DYTransport;

@interface DYTransportMessage : NSObject <NSKeyedArchiverDelegate, NSCopying> {
    id _decodedPayload;
    unsigned int _decodedPayloadType;
}

@property (retain, nonatomic) NSData *encodedAttributes;
@property (readonly, nonatomic) int kind;
@property (readonly, retain, nonatomic) NSDictionary *attributes;
@property (readonly, retain, nonatomic) NSData *payload;
@property (readonly, retain, nonatomic) DYTransport *transport;
@property (readonly, nonatomic) unsigned int serial;
@property (readonly, nonatomic) unsigned int replySerial;
@property (readonly, nonatomic) unsigned int transportSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageWithKind:(int)a0;
+ (id)messageWithKind:(int)a0 attributes:(id)a1;
+ (id)messageWithKind:(int)a0 attributes:(id)a1 objectPayload:(id)a2;
+ (id)messageWithKind:(int)a0 attributes:(id)a1 payload:(id)a2;
+ (id)messageWithKind:(int)a0 objectPayload:(id)a1;
+ (id)messageWithKind:(int)a0 plistPayload:(id)a1;
+ (id)messageWithKind:(int)a0 stringPayload:(id)a1;
+ (id)messageWithKind:(int)a0 attributes:(id)a1 boolPayload:(BOOL)a2;
+ (id)messageWithKind:(int)a0 attributes:(id)a1 plistPayload:(id)a2;
+ (id)messageWithKind:(int)a0 attributes:(id)a1 stringPayload:(id)a2;
+ (id)messageWithKind:(int)a0 boolPayload:(BOOL)a1;
+ (id)messageWithKind:(int)a0 payload:(id)a1;

- (id)init;
- (void)dealloc;
- (BOOL)boolForKey:(id)a0;
- (double)doubleForKey:(id)a0;
- (id)archiver:(id)a0 willEncodeObject:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeForKey:(id)a0;
- (BOOL)hasBeenSent;
- (unsigned long long)uint64ForKey:(id)a0;
- (id)stringPayload;
- (id)initWithKind:(int)a0 attributes:(id)a1 payload:(id)a2;
- (id)initWithKind:(int)a0 attributes:(id)a1 plistPayload:(id)a2;
- (id)objectPayload;
- (id)plistPayload;
- (void)_setSerial:(unsigned int)a0 replySerial:(unsigned int)a1 transport:(id)a2;
- (void)_setTransportSize:(unsigned int)a0;
- (BOOL)boolPayload;
- (id)initWithKind:(int)a0 attributes:(id)a1 boolPayload:(BOOL)a2;
- (id)initWithKind:(int)a0 attributes:(id)a1 objectPayload:(id)a2;
- (id)initWithKind:(int)a0 attributes:(id)a1 stringPayload:(id)a2;
- (unsigned int)uint32ForKey:(id)a0;

@end
