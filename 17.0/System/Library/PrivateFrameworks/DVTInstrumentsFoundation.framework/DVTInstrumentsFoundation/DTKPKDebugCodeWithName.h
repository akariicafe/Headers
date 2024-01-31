@class NSString;

@interface DTKPKDebugCodeWithName : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) union { unsigned int value; struct { unsigned char qualifier : 2; unsigned short code : 14; unsigned char subclass : 8; unsigned char classID : 8; } field; } kdebugCode;
@property (readonly, retain, nonatomic) NSString *name;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(unsigned int)a0 name:(id)a1;

@end
