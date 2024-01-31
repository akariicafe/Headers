@class NSData, BSProcessHandle;

@interface SYNotesActivationContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *userActivityData;
@property (readonly, nonatomic) BSProcessHandle *processHandle;
@property (readonly, nonatomic) unsigned int contextID;
@property (readonly, nonatomic) unsigned long long renderID;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithUserActivityData:(id)a0 contextID:(unsigned int)a1 renderID:(unsigned long long)a2;

@end
