@class NSDictionary, NSString;

@interface DEDBugSessionOperation : NSObject <NSSecureCoding, DEDSecureArchiving>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long type;
@property (retain) NSDictionary *options;
@property (retain) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivedClasses;
+ (id)hashingKeyWithId:(id)a0 type:(long long)a1;

- (id)hashingKey;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
