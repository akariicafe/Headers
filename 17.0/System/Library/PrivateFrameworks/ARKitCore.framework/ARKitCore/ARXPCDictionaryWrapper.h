@class NSObject;
@protocol OS_xpc_object;

@interface ARXPCDictionaryWrapper : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSObject<OS_xpc_object> *dictionary;

+ (id)wrapperWithDictionary:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
