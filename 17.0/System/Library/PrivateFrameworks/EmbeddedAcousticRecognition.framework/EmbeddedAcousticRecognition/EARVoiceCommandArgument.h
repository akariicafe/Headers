@class NSIndexSet;

@interface EARVoiceCommandArgument : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) char presence;
@property (readonly, copy, nonatomic) NSIndexSet *indexes;
@property (readonly, copy, nonatomic) NSIndexSet *adpositionIndexes;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPresence:(char)a0 indexes:(id)a1 adpositionIndexes:(id)a2;

@end
