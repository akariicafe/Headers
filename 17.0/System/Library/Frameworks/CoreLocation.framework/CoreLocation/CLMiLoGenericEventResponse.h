@class NSString, NSError;

@interface CLMiLoGenericEventResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) NSString *genericEventDescription;
@property (readonly, nonatomic) NSError *error;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEventType:(unsigned long long)a0 withDescription:(id)a1 withError:(id)a2;

@end
