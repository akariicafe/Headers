@class NSString, NSDictionary, NSArray;

@interface NSException : NSObject <NSCopying, NSSecureCoding> {
    NSString *name;
    NSString *reason;
    NSDictionary *userInfo;
    id reserved;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *reason;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly, copy) NSArray *callStackReturnAddresses;
@property (readonly, copy) NSArray *callStackSymbols;

+ (BOOL)supportsSecureCoding;
+ (id)exceptionWithName:(id)a0 reason:(id)a1 userInfo:(id)a2;
+ (void)raise:(id)a0 format:(id)a1;
+ (id)exceptionWithName:(id)a0 reason:(id)a1 userInfo:(id)a2 osLogPack:(void *)a3 size:(unsigned long long)a4;
+ (void)raise:(id)a0 format:(id)a1 arguments:(char *)a2;

- (id)replacementObjectForPortCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)debugDescription;
- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)redactedDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 reason:(id)a1 userInfo:(id)a2;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_isUnarchived;
- (void)_markAsUnarchived;
- (void)raise;
- (BOOL)_installStackTraceKeyIfNeeded;
- (id)initWithName:(id)a0 reason:(id)a1 userInfo:(id)a2 osLogPack:(void *)a3 size:(unsigned long long)a4;

@end
