@class NSString, NSArray;

@interface BSObjCValue : NSObject <NSCopying> {
    NSString *_unqualifiedEncoding;
    Class _objectClass;
    NSArray *_objectProtocols;
    NSArray *_objectContainedClasses;
    long long _argumentIndex;
    NSString *_argumentName;
    BOOL _block;
    BSObjCValue *_blockReturnValue;
    NSArray *_blockArguments;
}

@property (readonly, nonatomic) char type;
@property (readonly, nonatomic) char typeQualifier;
@property (readonly, copy, nonatomic) NSString *encoding;
@property (readonly, nonatomic) unsigned long long size;

- (Class)objectClass;
- (unsigned long long)hash;
- (long long)argumentIndex;
- (BOOL)isObject;
- (id)description;
- (id)structName;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isBlock;
- (BOOL)isFloatingPoint;
- (id)objectProtocols;
- (id)argumentName;
- (id)blockArguments;
- (id)blockReturnValue;
- (BOOL)isBoolean;
- (BOOL)isOneWay;
- (BOOL)isPointer;
- (BOOL)isStruct;
- (BOOL)isVoid;
- (BOOL)isXPCObject;
- (id)objectContainedClasses;
- (id)structFlattenedMembers;
- (id)structMembers;

@end
