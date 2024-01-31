@class NSString;

@interface CMIOExtensionScheduledOutput : NSObject <NSCopying, NSSecureCoding> {
    NSString *_description;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long sequenceNumber;
@property (readonly) unsigned long long hostTimeInNanoseconds;

+ (id)scheduledOutputWithSequenceNumber:(unsigned long long)a0 hostTimeInNanoseconds:(unsigned long long)a1;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyXPCDictionary;
- (id)initWithSequenceNumber:(unsigned long long)a0 hostTimeInNanoseconds:(unsigned long long)a1;

@end
