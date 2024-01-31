@class NSArray, NSString;

@interface EMMessageChangeAction : NSObject <NSSecureCoding, EFPubliclyDescribable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long origin;
@property (nonatomic) long long actor;
@property (readonly, copy, nonatomic) NSArray *objectIDs;
@property (readonly, nonatomic) long long signpostType;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithObjectIDs:(id)a0 origin:(long long)a1 actor:(long long)a2;
- (id)initWithMessageListItems:(id)a0 origin:(long long)a1 actor:(long long)a2;

@end
